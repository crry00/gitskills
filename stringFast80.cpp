#include <iostream>
#include <string>

uint32_t count=0;

void* operator new(size_t size)
{

    count++;
    std::cout<<"Alloct"<<size<<"bytes\n";
    return malloc(size);
}

void PrintName(const std::string & name)
{
    std::cout<<name<<std::endl;
}

int main()
{
    std::string name;
    std::cin>>name;
    PrintName(name);

    std::cout<<"count"<<count<<std::endl;

}