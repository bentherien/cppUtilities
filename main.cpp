#include "ArrayList.hpp"
using namespace std; 
int main()
{
    arrayList<int> ls(10);

    for(int x=0; x<10; x++)
        ls.add(x);


    ls.display();

    return 0;
}