#include <iostream>
#include <string>

#define DEBUG 0

#if 0

#if  DEBUG==1
#define LOG(x) std::cout<<x<<std::endl
#elif DEBUG==2
#define LOG(x) std::cout<<"2222 "<<x<<std::endl
#else
#define LOG(x)
#endif

#endif

#define RETURN std::cout<<"finish"\
<<std::endl;\
return 0


int main()
{

    LOG("hello");
    std::cin.get();
    RETURN;
}