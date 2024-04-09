#pragma once
#include <cstring>
#include <iostream>


class Node
{
private:
    char* _data;
    Node* _next=nullptr;
    Node* _prev=nullptr;

public:
    Node(const char* str);
    ~Node();

    const char* getData() const;
    Node* getPrev() const;
    void setPrev(Node* prevNode);
    Node* getNext() const;
    void setNext(Node* nextNode);


};

class TwoWayList
{
private:
    Node* _head=nullptr;
    Node* _tail=nullptr;
    

public:
    TwoWayList();


    void prepare();
    void prepend(const char* str);
    void append(const char* str);
    bool empty();
    void dump();
    const Node* getHead() const;
    const Node* getTail() const;
    void dumpBack();
    void clear();


};