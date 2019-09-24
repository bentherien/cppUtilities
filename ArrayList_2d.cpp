//
//  ArrayList.cpp
//  FinalPractise
//
//  Created by Benjamin Therien on 2018-12-09.
//  Copyright © 2018 Benjamin Therien. All rights reserved.
//

#include "ArrayList.hpp"
using namespace std;

template<typename T>
arrayList<T>::arrayList(int startSize)
{
/*
Description: creates list with specified legth and class
 */
    if(startSize<1)
    { 
        array = new T(1);
        size=1;
        occupied=0;
    }
    else
    {
        array = new T(startSize);
        size=startSize;
        occupied=0;
    }
    
}

template<typename T>
arrayList<T>::~arrayList()
{
/*
Description: Destroys array
 */
    delete [] array;
    array= NULL;
}

template<typename T> 
inline int arrayList<T>::getSize(){return size;}

template<typename T>
inline T* arrayList<T>::getArray(){return array;}


template<typename T>
void arrayList<T>::add(T element)
{
/*
Description: adds an element to the list, checking if this addition goes beyond 
the current limit of the array we increase the arrays length 
*/
    if(size-1==occupied)
    {
        T* temp= array;
        array= new T(size*2);
        for(int i=0; i<size; i++)
        {
            array[i]= temp[i];
        }
        array[occupied]= element;
        occupied++;
        size=size*2;
        delete [] temp;
        temp=NULL;
    }
    else
    {
        array[occupied]= element;
         occupied++;
    }
}

template<typename T>
T arrayList<T>::removeLast()
{
/*
Description: removes the last element of the list
*/
    T* temp = NULL;
    *temp= array[occupied];
    array[occupied]= NULL; //check if this is the best way to do this
    occupied--;
    return *temp;
}

template<typename T>
T arrayList<T>::removeElement(int index)
{
/*
Description: removes the element at a specified index
*/
    T* temp = NULL;
    *temp= array[occupied];
    array[index] = array[occupied];
    array[occupied]= NULL;
    occupied--;
    return *temp;
}

template<typename T>
void arrayList<T>::display()
{
/*
Description: displays the entire list
*/
    for(int i =0; i<occupied; i++)
    {
        cout<<array[i]<<endl;
    }
}

