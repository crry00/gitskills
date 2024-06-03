#include <iostream>
#include <vector>
#include <algorithm>
#include<functional>

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


void ForEach(const std::vector<int>& values,const std::function<void(int)>& funtion)
{
    for(int value:values)
    {
        funtion(value);
    }
}


int main()
{
    std::vector<int> values={1,5,4,3,2,6};
    auto it=std::find_if(values.begin(),values.end(),[](int value){return value>3;});
    std::cout<<*it<<std::endl;
    int a=5;
    auto lambda=[&a](int value) mutable {
        a=4;
        std::cout<<value<<"a:"<<a<<std::endl;
    };
    ForEach(values,lambda);


    std::cin.get();
}