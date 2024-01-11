#include "cardVerificationUtilities.h"

char getControlNum(const char *cardNum)
{
    int offset = strlen(cardNum)+1;
    int sum = 0;
    int digit;

    for (size_t i = 0; cardNum[i] != 0; i++)
    {
        digit = (cardNum[i] - '0') * ((i + offset) % 2 + 1);
        sum += digit < 10 ? digit : digit - 9;
    }
    return static_cast<char>(sum % 10 + '0');
}

bool checkNum(const char *cardNum)
{
    return getControlNum(cardNum) == '0';
}