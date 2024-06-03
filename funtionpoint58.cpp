#include <iostream>
#include <vector>


// void HelloWorld()
// {
//     std::cout<<"Hello World"<<std::endl;
// }


// int main()
// {
//     // typedef void (*funtiontype)();
//     // funtiontype funtion=HelloWorld;
//     // funtion();
//     // std::cin.get();
// }

void Printvalue(int& value)
{
    std::cout<<"value:"<<value<<std::endl;
}


void ForEach(const std::vector<int>& values,auto funtion)
{
    for(int value:values)
    {
        funtion(value);
    }
}


int main()
{
    std::vector<int> values={1,5,4,3,2,6};
    ForEach(values,[](int value){
        std::cout<<value<<std::endl;
    });


    std::cin.get();
}