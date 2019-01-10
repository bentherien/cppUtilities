//
//  ArrayList.cpp
//  FinalPractise
//
//  Created by Benjamin Therien on 2018-12-09.
//  Copyright © 2018 Benjamin Therien. All rights reserved.
//

#include "ArrayList.hpp"
using namespace std;

template<typename T, int S>
arrayList<T,S>::arrayList()
{
    if(S<1)
    {
        array = new T(1);
        size=1;
        occupied=0;
    }
    else
    {
        array = new T(S);
        size=S;
        occupied=0;
    }
    
}

template<typename T, int S>
arrayList<T,S>::~arrayList()
{
    delete [] array;
    array= nullptr;
}

template<typename T, int S>
inline int arrayList<T,S>::getSize(){return size;}

template<typename T, int S>
inline T* arrayList<T,S>::getArray(){return array;}


template<typename T, int S>
void arrayList<T,S>::add(T element)
{
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
        temp=nullptr;
    }
    else
    {
       
        array[occupied]= element;
         occupied++;
    }
}

template<typename T, int S>
T arrayList<T,S>::removeLast()
{
    T* temp = nullptr;
    *temp= array[occupied];
    array[occupied]= NULL; //check if this is the best way to do this
    occupied--;
    return *temp;
}

template<typename T, int S>
T arrayList<T,S>::removeElement(int index)
{
    T* temp = nullptr;
    *temp= array[occupied];
    array[index] = array[occupied];
    array[occupied]= NULL;
    occupied--;
    return *temp;
}

template<typename T, int S>
void arrayList<T,S>::display()
{
    for(int i =0; i<occupied; i++)
    {
        cout<<array[i]<<endl;
    }
}

template class arrayList<int, 10>;

class a
{
public:
    int size;
    a(int i): size(i){}
    int getsize(){return size;}
    int getsizee()const {return size;}
};


int main()
{
    const a ob(3);
    ob.getsize();
  
}
