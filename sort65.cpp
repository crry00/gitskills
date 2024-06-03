#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <functional>

struct Timer
{
    std::chrono::time_point<std::chrono::system_clock> start,end;
    std::chrono::duration<float> duration;
    Timer()
    {
        start=std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end=std::chrono::high_resolution_clock::now();
        duration=end -start;
        std::cout<<"Timer : "<<duration.count()<<"s\n";
    }
};

int main()
{
    std::vector<int> values={5,3,4,2,6};
    std::sort(values.begin(),values.end(),[](int a,int b)
    {
        if (a==5)
        {
            return false;
        }
        
        if (b==5)
        {
            return true;
        }
        return a>b;
    });
    {
    Timer timer;
    for(int value:values)
    {
        std::cout<<value<<std::endl;
    }
    }
    std::cin.get();
}