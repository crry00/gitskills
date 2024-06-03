#include <iostream>
#include <thread>


static bool s_finish=false;

void Dowork()
{
    using namespace std::literals::chrono_literals;

    std::cout<<"Dowork thread id:"<<std::this_thread::get_id()<<std::endl;
    while (!s_finish)
    {
        std::cout<<"working..."<<std::endl;
        std::this_thread::sleep_for(1s);
    }
    
    
}

int main()
{
    std::thread worker(Dowork);

    std::cin.get();
    s_finish=true;

    worker.join();
    std::cout<<"main thread id:"<<std::this_thread::get_id()<<std::endl;

    std::cin.get();
    printf("ok");
    return 0;
}