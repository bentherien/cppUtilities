//
//  ArrayList.hpp
//  FinalPractise
//
//  Created by Benjamin Therien on 2018-12-09.
//  Copyright © 2018 Benjamin Therien. All rights reserved.
//

#ifndef ArrayList_hpp
#define ArrayList_hpp

#include <iostream>
#include <string>
using namespace std;

template<typename T> class arrayList
{
public:
    
    arrayList(int startSize);
    ~arrayList();
    inline int getSize();
    inline T* getArray();
    void add(T element);
    T removeLast();
    T removeElement(int index);
    void display();
    
    
private:
    
    int size, occupied;
    T* array;
};



#endif /* ArrayList_hpp */
