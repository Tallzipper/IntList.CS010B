using namespace std;

#include "IntList.h"

#include <iostream>

IntList::IntList() : head(nullptr), tail(nullptr) {}

IntList::~IntList() 
{

    clear();

}

void IntList::clear()
{
    
    IntNode* temp = nullptr;
    while(head != nullptr)
    {

        temp = head -> next;
        delete head;
        head = temp; 

    }

    tail = nullptr;

}

void IntList::push_front(int value)
{
    
    if(empty())
    {

        head = new IntNode(value);
        tail = head;

    }
    else
    {

        IntNode* newPtr = new IntNode(value);
        newPtr -> next = head; 
        head = newPtr; 

    }

}

void IntList::pop_front()
{

    if(!empty())
    {
        if(head == tail)
        {

            delete head;
            head = nullptr;
            tail = nullptr;

        }
        else
        {
            
            IntNode* temp = head;
            head = head->next;
            delete temp;

        }

    }

    if(head == nullptr)
    {

        tail = nullptr;

    }

}

bool IntList::empty() const
{

    if(head == nullptr)
        return true;
    return false;

}

const int& IntList::front() const
{

    return head -> value;

}

const int& IntList::back() const
{


    return tail -> value;


}

ostream & operator<<(ostream &out, const IntList &rhs)
{


    IntNode *temp = rhs.head;

    if(rhs.head != rhs.tail)
    {
        while(temp->next != nullptr)
        {
        
            out << temp->value << " ";

            temp = temp->next;
        

        }  
    }

    if(temp != nullptr)
    {
    out << temp->value;
    }

    return out;
}