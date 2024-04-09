#include "lab04.h"

void printContainer(myContainer &container)
{
    if (container.N <= 0)
    {
        std::cout << "Cannot print empty Container.\n";
        return;
    }
    std::cout << '[';
    for (size_t i = 0; i < container.N - 1; i++)
    {
        std::cout << container.array[i] << ',';
    }
    std::cout << container.array[container.N - 1] << ']';
}

bool fillContainerWithFibonacci(myContainer *container, int lenght)
{
    if (!container)
    {
        std::cout << "Empty pointer provided.\n";
        return false;
    }
    if (lenght <= 0 || lenght > MAX_SIZE)
    {
        std::cout << "Wrong number of dimensions.\n";
        return false;
    }

    // ok thts little wird, recursive lambda brbrbrrrbrb..
    auto fib = [](int n, auto fib)
    {
        if (n <= 1)
            return 1;
        return fib(n - 1, fib) + fib(n - 2, fib);
    };
    container->N = lenght;
    for (size_t i = 0; i < lenght; i++)
        container->array[i] = fib(i, fib);
    return true;
}

void checkContainerSpouse(myContainer *container)
{
    if (!container)
    {
        std::cout << "Cannot check spouse for empty Container.\n";
        return;
    }

    printContainer(*container);
    if (!container->spouse)
        std::cout << " has no spouse.\n";
    else
    {

        std::cout << " is paired with ";
        printContainer(*(container->spouse));
        std::cout << '\n';
    }
}

void marry(myContainer *partner, myContainer *spouse)
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

void divorce(myContainer *partner, myContainer *spouse)
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

myContainer formChild(myContainer *partner, myContainer *spouse)
{
    myContainer child;
    if (!partner && !spouse)
    {
        std::cout << "I ain't God.\n";
        return child;
    }
    if (!partner || !spouse)
    {
        std::cout << "No partenogenesis possible.\n";
        return child;
    }
    if (partner->spouse != spouse)
    {
        std::cout << "Only spouses may have children.\n";
        return child;
    }
    if (partner->N + spouse->N > MAX_SIZE)
    {
        std::cout << "too large parents.\n";
        return child;
    }

    child.N = partner->N + spouse->N;
    memcpy(child.array, partner->array, partner->N * sizeof(*partner->array));
    memcpy(child.array + partner->N, spouse->array, spouse->N * sizeof(*spouse->array));
    child.parents[0] = partner;
    child.parents[1] = spouse;

    return child;
}

void printParents(myContainer *container)
{
    if (!container->parents[0])
    {
        printContainer(*container);
        std::cout << " has no parents.\n";
        return;
    }
    std::cout << "Parents of ";
    printContainer(*container);
    std::cout << " are ";
    printContainer(*container->parents[0]);
    std::cout << " and ";
    printContainer(*container->parents[1]);
    std::cout << '\n';
}