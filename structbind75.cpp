#include <iostream>
#include <tuple>
#include <string>


std::tuple<std::string,int> CreatePersion()
{
    return {"cherno",24};
}

int main()
{
    // std::tuple<std::string,int> person=CreatePersion();
    // auto& name=std::get<0>(person);
    // std::cout<<name<<std::endl;


    // std::string name_;
    // int age;
    // std::tie(name,age)=CreatePersion();
    // std::cout<<age<<std::endl;
    auto[name,age]=CreatePersion();
    std::cout<<name<<std::endl;
    std::cin.get();
}
