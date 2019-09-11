#ifndef ArrayList_hpp
#define ArrayList_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

template<typename T > class graph
{

    public: 
        graph();
        ~graph();
        T graph_getElemetAtIndex(int index);
        T graph_removeElementAtIndex(int index); 
        void graph_display();
        inline T** graph_getMatrix();
        inline int graph_getSize(); 
        bool graph_edgeExists(int indexOne, int indexTwo); 
        void graph_addEdge(int indexOne, int indexTwo); 
        void graph_addNode(T element);

    private:
        int size, endIndex; 
        T** matrix;



};
#endif