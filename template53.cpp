#include <iostream>
#include <string>
template<typename T>
void Print(T value)
{
    std::cout<<value<<std::endl;
}

template<typename T,int size>
class Array
{
private:
    T m_Array[size];
    public:
    int getSize() const {return size;}
};


int main()
{
    // Print<int>(5);
    Array<int,5> array;
    std::cout<<array.getSize()<<std::endl;
    std::cin.get();
}