#include<iostream>

struct pair
{
    int a;
    int b;
};

pair test()
{
    return pair{10,20};
}


int main()
{
    pair t=test();
    std::cout<<t.a<<","<<t.b<<std::endl;
    std::cin.get();
}