#include<iostream>

namespace A
{
void print(int a)
{
    std::cout<<a<<std::endl;
}
}
namespace AA
{
void print(int a)
{
    std::cout<<a<<"a"<<std::endl;
}
}
int main()
{   namespace aa=AA;
    aa::print(1);
    std::cin.get();
}
