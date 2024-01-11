#pragma once
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

const size_t MAX_SIZE = 50;

struct myArray
{
    int N = 0;
    int array[MAX_SIZE] = {0};
    myArray *spouse = nullptr;
};
const int fibonacci(const int n);

void printArray(const myArray &arr);
const bool fillArrayWithFibonacci(myArray *const arr, const size_t lenght);
void revert(myArray *const arr);
void extend(myArray *const arr, const size_t lenght);
void truncate(myArray *const arr, const size_t lenght);
void checkArraySpouse(const myArray *const arr);
void marry(myArray *const partner, myArray *const spouse);
void divorce(myArray *const container1, myArray *const container2);

inline bool operator==(const myArray &lhs, const myArray &rhs)
{
    if (lhs.N != rhs.N)
    {
        return false;
    }

    for (size_t i = 0; i < lhs.N; i++)
    {
        if (lhs.array[i] != rhs.array[i])
        {
            return false;
        }
    }
    return true;
}