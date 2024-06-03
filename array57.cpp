#include <iostream>
#include <array>

template<int n>
void PrintArray(const std::array<int,n>& data)
{
    for(int i=0;i<data.size();i++)
    {
        std::cout<<data[i]<<std::endl;
    }
}


int main()
{

    std::array<int,5> data;
    data[0]=2;

    data[4]=1;
    

    PrintArray(data);
}