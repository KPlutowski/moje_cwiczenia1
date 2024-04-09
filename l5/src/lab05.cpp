#include "lab05.h"

void printArray(const myArray &arr)
{
    if (arr.N <= 0)
    {
        std::cout << "Cannot print empty Array.\n";
        return;
    }
    std::cout << '[';
    for (size_t i = 0; i < arr.N - 1; i++)
    {
        std::cout << arr.array[i] << ',';
    }
    std::cout << arr.array[arr.N - 1] << ']';
}

const int fibonacci(const int n)
{
    if (n <= 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

const bool fillArrayWithFibonacci(myArray *const arr, const size_t lenght)
{
    if (!arr)
    {
        std::cout << "Empty pointer provided.\n";
        return false;
    }
    if (lenght <= 0 || lenght > MAX_SIZE)
    {
        std::cout << "Wrong number of dimensions.\n";
        return false;
    }

    // recursive lambda
    // auto fibonacci = [](int n, auto fibonacci)
    // {
    //     if (n <= 1)
    //         return 1;
    //     return fibonacci(n - 1, fibonacci) + fibonacci(n - 2, fibonacci);
    // };

    arr->N = lenght;
    for (size_t i = 0; i < lenght; i++)
        arr->array[i] = fibonacci(i);

    return true;
}

void checkArraySpouse(const myArray *const arr)
{
    if (!arr)
    {
        std::cout << "Cannot check spouse for empty Array.\n";
        return;
    }

    printArray(*arr);
    if (!arr->spouse)
        std::cout << " has no spouse.\n";
    else
    {

        std::cout << " is paired with ";
        printArray(*(arr->spouse));
        std::cout << '\n';
    }
}

void marry(myArray *const partner, myArray *const spouse)
{
    if (!partner || !spouse)
    {
        std::cout << "Empty pointer provided.\n";
        return;
    }
    if (partner->spouse != nullptr || spouse->spouse != nullptr)
    {
        std::cout << "Can't marry someone who is already married." << std::endl;
        return;
    }
    if (partner == spouse)
    {
        std::cout << "Can\'t marry myself\n";
        return;
    }
    if (*partner == *spouse)
    {
        std::cout << "Can\'t marry my twin\n";
        return;
    }
    partner->spouse = spouse;
    spouse->spouse = partner;
}

void divorce(myArray *const partner, myArray *const spouse)
{
    if (!partner || !spouse)
    {
        std::cout << "Empty pointer provided.\n";
        return;
    }
    if (partner->spouse != spouse)
    {
        std::cout << "they are not marided\n";
        return;
    }
    partner->spouse = nullptr;
    spouse->spouse = nullptr;
}

void revert(myArray *const arr)
{
    std::reverse(arr->array, arr->array + arr->N);
    printArray(*arr);
    std::cout << " (reverting done)\n";
}
void extend(myArray *const arr, const size_t lenght)
{
    if (arr->N + lenght > MAX_SIZE)
    {
        std::cout << "Wow, you've just gone crazy (" << arr->N + lenght << ">" << MAX_SIZE << ").\n";
        return;
    }
    arr->N += lenght;
    printArray(*arr);
    std::cout << " (extending by " << lenght << " done)\n";
}
void truncate(myArray *const arr, const size_t lenght)
{
    if (arr->N - lenght <= 0)
    {
        arr->N = 0;
        return;
    }
    arr->N -= lenght;
    printArray(*arr);
    std::cout << " (truncation by " << lenght << " done)\n";
}