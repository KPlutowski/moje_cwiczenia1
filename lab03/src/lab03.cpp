#include "lab03.h"


void AddStudent(int* numberOfStudents,char ***nameList,int** yearList,char *name,int year)
{

    int *newYerarList=new int[*numberOfStudents+1];
    memcpy(newYerarList,*yearList,*numberOfStudents*sizeof(int));
    delete [] *yearList;
    *yearList=newYerarList;
    (*yearList)[*numberOfStudents]=year;


    char **newNameList=new char*[*numberOfStudents+1];


    memcpy(newNameList,*nameList,*numberOfStudents*sizeof(char*));


    delete [] *nameList;
    *nameList=newNameList;
    (*nameList)[*numberOfStudents]=name;






    *numberOfStudents=*numberOfStudents+1;
}

void Cat(int numberOfStudents,char **List)
{
    for (size_t i = 0; i < numberOfStudents; i++)
    {
        std::cout<<List[i]<<std::endl;
    }
    
}
void Cat(int numberOfStudents,int *List)
{
    for (size_t i = 0; i < numberOfStudents; i++)
    {
        std::cout<<List[i]<<std::endl;
    }
}

void ClearList(int numberOfStudents,char ***List)
{
    delete *List;
}
void ClearList(int numberOfStudents,int **List)
{
    delete* List;
}
