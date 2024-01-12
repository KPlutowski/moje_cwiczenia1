#include "lab07.h"

Node::Node(const char* str) :  _prev(nullptr), _next(nullptr) 
{
    _data=new char[strlen(str)+1];
    strcpy(_data,str);
}

Node::~Node()
{
    delete _data;
}


const char* Node::getData() const {
    return _data;
}

Node* Node::getPrev() const {
    return _prev;
}

void Node::setPrev(Node* prevNode) {
    _prev = prevNode;
}

Node* Node::getNext() const {
    return _next;
}

void Node::setNext(Node* nextNode) {
    _next = nextNode;
}

    
TwoWayList::TwoWayList()
{
    _head=nullptr;
}
void TwoWayList::prepare()
{
    
}
void TwoWayList::prepend(const char* str)
{
    Node* tmp=new Node(str);
    if (empty())
    {
        _head=tmp;
        _tail=tmp;
    }
    else
    {
        _head->setPrev(tmp);
        tmp->setNext(_head);
        _head=tmp;
    }
}
void TwoWayList::append(const char* str)
{
    Node* tmp=new Node(str);

    if (empty())
    {
        _head=tmp;
        _tail=tmp;
    }
    else
    {
        _tail->setNext(tmp);
        tmp->setPrev(_tail);
        _tail=tmp;
    }
}
bool TwoWayList::empty()
{
    return _head==nullptr;
}
void TwoWayList::dump()
{
    Node* current=_head;
    while (current!=nullptr)
    {
        std::cout<<current->getData()<<' ';
        current=current->getNext();
    }
}
const Node* TwoWayList::getHead() const
{
    return _head;
}
const Node* TwoWayList::getTail() const
{
    return _tail;
}
void TwoWayList::dumpBack()
{
    Node* current=_tail;
    while (current!=nullptr)
    {
        std::cout<<current->getData()<<' ';
        current=current->getPrev();
    }
}
void TwoWayList::clear()
{
    if (!empty())
    {
        Node* current=_head->getNext();
        while (current!=nullptr)
        {
            delete current->getPrev();
            current=current->getNext();
        }
        delete _tail;
        _head=_tail=nullptr;
    }
    
}