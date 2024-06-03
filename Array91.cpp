#include <iostream>

template<typename T, size_t S>
class Array
{
public:
    constexpr size_t  Size() const { return S; }

    T& operator[](size_t index) { return m_Data[index]; }
    const T& operator[](size_t index) const  { return m_Data[index]; }

    
    T* Data(){ return m_Data; }
    const T* Data() const { return m_Data; }


private:
    T m_Data[S];

};


int main()
{

    int size=5;
    Array<std::string,2> data;

    data[0]="cui yu";
    data[1]="xu chuxin";
    static_assert(data.Size()<10,"size is too large!");

    Array<std::string,data.Size()> newArray;
    data.Size();

    const auto& arrayConst=data;

    for(size_t i=0;i<data.Size();i++)
    {

        std::cout<<i<<" :  "<<arrayConst[i]<<std::endl;
    }
    std::cin.get();
}