#include <iostream>
#include <string>
#include <vector>


int main()
{
    auto a=5.f;
    auto b=a; 


    std::vector<std::string> strings;
    strings.push_back("apple");
    strings.push_back("orange");

    // for(std::vector<std::string>::iterator it=strings.begin();it!=strings.end();it++)
    for(auto it=strings.begin();it!=strings.end();it++)

{
    std::cout<<*it<<std::endl;
}


    std::cin.get();
}