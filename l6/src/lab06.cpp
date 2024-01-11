#include "lab06.h"

const double *initGeometricalSequence(const double a1, const double q, const size_t noumberOfElements)
{
    if (noumberOfElements <= 0)
    {
        std::cout << "Size must be non-zero (and positive)\n";
        return nullptr;
    }

    double *seq = new double[noumberOfElements];
    if (!seq)
    {
        std::cout << "err\n";
        return nullptr;
    }

    seq[0] = a1;
    for (size_t i = 1; i < noumberOfElements; i++)
    {
        seq[i] = seq[i - 1] * q;
    }
    return seq;
}

const double *initArithmeticSequence(const double a1, const double q, const size_t noumberOfElements)
{
    if (noumberOfElements <= 0)
    {
        std::cout << "Size must be non-zero (and positive)\n";
        return nullptr;
    }

    double *seq = new double[noumberOfElements];
    if (!seq)
    {
        std::cout << "err\n";
        return nullptr;
    }

    seq[0] = a1;
    for (size_t i = 1; i < noumberOfElements; i++)
    {
        seq[i] = seq[i - 1] + q;
    }
    return seq;
}

void printSequence(const double *sequence, const size_t noumberOfElements)
{
    if (!sequence || noumberOfElements == 0)
    {
        std::cout << "Nothing to print.\n";
        return;
    }

    std::cout << '(';
    for (size_t i = 0; i < noumberOfElements - 1; i++)
    {
        std::cout << sequence[i] << ',';
    }
    std::cout << sequence[noumberOfElements - 1] << ')' << std::endl;
}

void deleteSequence(const double **sequence)
{
    if (!sequence || !(*sequence))
    {
        std::cout << "Nothing to delete.\n";
        return;
    }

    delete[] *sequence;
    *sequence = nullptr;
    std::cout << "Sequence deleted.\n";
}

void addSequence(const double ***sequencesList, int **sequencesLengthsList, const double *sequence, const int length)
{
    int index = 0;
    if (*sequencesLengthsList != 0)
    {
        while ((*sequencesLengthsList)[index] != 0)
            index++;
    }

    const double **newSequenceList = new const double *[index + 2];
    int *newSequenceLenghtsList = new int[index + 2];

    for (size_t i = 0; i < index; i++)
    {
        newSequenceLenghtsList[i] = (*sequencesLengthsList)[i];
        newSequenceList[i] = (*sequencesList)[i];
    }
    newSequenceLenghtsList[index] = length;
    newSequenceList[index] = sequence;
    newSequenceLenghtsList[index + 1] = 0;
    newSequenceList[index + 1] = 0;

    delete[] *sequencesLengthsList;
    delete[] *sequencesList;

    *sequencesLengthsList = newSequenceLenghtsList;
    *sequencesList = newSequenceList;

    // index++;
}

void printSequence(const double **sequencesList, const int *sequencesLengthsList)
{
    int index = 0;
    if (sequencesLengthsList != 0)
    {
        while (sequencesLengthsList[index] != 0)
            index++;
    }


    for (size_t i = 0; i < index; i++)
    {
        std::cout << "Sequence " << i + 1 << ": ";
        printSequence(sequencesList[i], sequencesLengthsList[i]);
    }
}

void deleteSequence(const double **sequencesList, const int *sequencesLengthsList)
{
    int index = 0;
    if (sequencesLengthsList != 0)
    {
        while (sequencesLengthsList[index] != 0)
            index++;
    }
    for (size_t i = 0; i < index; i++)
    {
        deleteSequence(&sequencesList[i]);
    }
    
}
