#pragma once
#include <cstddef>
#include<iostream>
void AddStudent(int* numberOfStudents,char ***nameList,int** yearList,char *name,int year);

void Cat(int numberOfStudents,char **List);
void Cat(int numberOfStudents,int *List);

void ClearList(int numberOfStudents,char ***List);
void ClearList(int numberOfStudents,int **List);
