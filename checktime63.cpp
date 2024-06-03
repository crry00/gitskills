#include <iostream>
#include <chrono>
#include <thread>


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



void Function()
{
    Timer timer;
    for(int i=0;i<100;i++)
    std::cout<<"hello\n";

}


int main()
{
    Function();
    std::cin.get();
}