#include <iostream>
#include <memory>


struct Memorycount
{
    uint32_t Totalnew=0;
    uint32_t Totalfree=0;


    uint32_t Currentusage(){return Totalnew-Totalfree;}

    
};

static Memorycount usecount;

void* operator new(size_t size)
{
    std::cout<<"Alloct:"<<size<<"bytes\n";
    usecount.Totalnew+=size;
    return malloc(size);
}


void operator delete(void* memory,size_t size)
{
    std::cout<<"free :"<<size<<"bytes\n";
    usecount.Totalfree+=size;
    free(memory);
}

struct Object
{
    int x,y,z;
};



int main()
{
    //Object* obj=new Object;
    {
    std::unique_ptr<Object> obj=std::make_unique<Object>();

        std::cout<<"coutn:  "<<usecount.Currentusage()<<std::endl;
    }
}