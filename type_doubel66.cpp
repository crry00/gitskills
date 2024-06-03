#include <iostream>

struct Entity
{
    int x,y;

    int* getposition()
    {
        return &x;
    }

};

struct test
{
    
};
//显示和隐式直接转化会改变值，唯有通过指针读取后解读不会

int main()
{
    Entity e={5,8};

    int* position=(int*)&e;

    int y=*(int*)((char*)&e+4);

    std::cout<<position[1]<<"yy"<<y<<std::endl;


    int* pose=e.getposition();
    std::cout<<pose[0]<<std::endl;

    test t;

    std::cout<<"size"<<sizeof(t)<<std::endl;


    std::cin.get(); 
}