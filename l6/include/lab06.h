#pragma once
#include <iostream>

typedef const double *Array;

const double * initGeometricalSequence(const double a1, const double q, const size_t noumberOfElements);

const double * initArithmeticSequence(const double a1,const double q, const size_t noumberOfElements);


void printSequence(const double* sequence, const size_t noumberOfElements);
void deleteSequence(const double** sequence);


void addSequence(const double ***sequencesList,int **sequencesLengthsList, const double* sequence,const int length);

void printSequence(const double **sequencesList,const int* sequencesLengthsList);
void deleteSequence(const double **sequencesList,const int* sequencesLengthsList);


