#ifndef ArrayList_hpp
#define ArrayList_hpp

#include <iostream>
#include <string>
using namespace std;

template<typename T> class singlyLinkedList
{
    struct Node
    {
        T data; 
        struct Node *next;
    };

    public: 
        singlyLinkedList();
        ~singlyLinkedList();
        inline int getSize();
        void add(T element);
        T removeHead();
    
    private: 
        int size;
        struct Node *head; 
        
};

