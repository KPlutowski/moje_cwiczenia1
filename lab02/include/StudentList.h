#pragma once
#include<iostream>

typedef struct TStudent{
    int data;
    TStudent *next;

}TStudent;

void show(TStudent* student);
void push_front(TStudent** student,int dane);

void clear(TStudent** student);
TStudent* InitTStudent();