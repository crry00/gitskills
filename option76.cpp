#include<iostream>
#include<fstream>
#include <optional>

std::optional<std::string> ReadFileAsString(const std::string& filepath)
{
    std::ifstream stream(filepath);
    if(stream)
    {
        std::string result;
        stream.close();
        return result;
    }

    return {};
}


int main()
{
    auto data=ReadFileAsString("data.txt");
    //if (data)
    if (data.has_value())
    {
        std::cout<<"file read succes"<<std::endl;
    }
    else
    {
        std::cout<<"unsucces"<<std::endl;
    }
}