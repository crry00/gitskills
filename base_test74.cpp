#include <iostream>
#include <memory>
#include <chrono>
#include <array>

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
    int value=0;
    {
    
    Timer time;
    for(int i=0;i<1000000;i++)
    {
        value+=2;
    }
    }
    std::cout<<value<<std::endl;



    struct Vector2
    {
        float x,y;
    };

    {
        std::array<std::shared_ptr<Vector2>,1000> sharePTRs;
        Timer time1;
        for(int i=0;i<sharePTRs.size();i++)
        {
            sharePTRs[i]=std::make_shared<Vector2>();
        }
    }
    {
        std::array<std::shared_ptr<Vector2>,1000> sharePTRs;
        Timer time1;
        for(int i=0;i<sharePTRs.size();i++)
        {
            sharePTRs[i]=std::shared_ptr<Vector2>(new Vector2());
        }
    }
    {
        std::array<std::unique_ptr<Vector2>,1000> sharePTRs;
        Timer time1;
        for(int i=0;i<sharePTRs.size();i++)
        {
            sharePTRs[i]=std::make_unique<Vector2>();
        }
    }

}