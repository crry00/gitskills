#include <iostream>
#include "Vector.h"


int main()
{
    Vector<int> vector;

    vector.EmplaceBack(2.f);
    vector.EmplaceBack(3.f);
    vector.EmplaceBack(4.f);
    vector.EmplaceBack(5.f);
    vector.EmplaceBack(6.f);

    for(int& value: vector)
    {
        std::cout<<value<<std::endl;
    }

    for(Vector<int>::Iterator it =vector.begin();it!=vector.end();it++)
    {
        std::cout<<*it<<std::endl;
    }

}