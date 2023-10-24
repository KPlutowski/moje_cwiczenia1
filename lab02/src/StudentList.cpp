#include "StudentList.h" 


void show(TStudent* student)
{
    std::cout<<"Aktualny stan listy:\n";
    if(student==NULL){
        std::cout<<"Lista jest pusta\n";
        return;
    }
    TStudent* tmp=student;

    while(tmp!=NULL){
        std::cout<<tmp->data<<std::endl;
        tmp=tmp->next;
    }
}

void push_front(TStudent** student,int dane){
    TStudent *tmp= InitTStudent();

    tmp->next=(*student);
    tmp->data=dane;
    *student=tmp;
}

void clear(TStudent** student){
    TStudent *next=(*student);

    while (next->next!=NULL)
    {
        next=next->next;
        delete *student;
        *student=next;
        
    }
    delete next;
    *student=NULL;
}

TStudent* InitTStudent(){
    TStudent *student=new TStudent;
    student->data =0;
    student->next=NULL;
    return student;
}