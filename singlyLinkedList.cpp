
#include "singlyLinkedList.hpp"
using namespace std;

template<typename T>
singlyLinkedList<T>::singlyLinkedList()
{
    this.head = NULL;
    this.size=0;
}

template<typename T>
singlyLinkedList<T>::~singlyLinkedList()
{
    delete this.head;
}

template<typename T>
singlyLinkedList<T>::add(T element)
{
    if(this.head == NULL)
    {
        struct Node *newNode = (struct Node*)malloc(sizeOf(struct Node));
        newNode->data=element; 
        newNode->next=NULL;
        this.head=newNode;
    }
    else
    {
        struct Node *newNode = (struct Node*)malloc(sizeOf(struct Node));
        newNode->data=element; 
        newNode->next=head;
        this.head=newNode;
    }
}

template<typename T>
singlyLinkedList<T>::removeHead()
{
    if(this.head != NULL)
    {
        struct Node *newHead = this.head->next;
        free((void*)(this.head->next))
        this.head=newNode;
    }
}