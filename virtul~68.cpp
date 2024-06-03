#include <iostream>

class Base
{
public:
    Base(){std::cout<<"Base Constructor\n";}
    virtual ~Base(){std::cout<<"Base destorytor\n";}

};

class Derived: public Base
{
public:
    Derived(){std::cout<<"Derive Constructor\n";}
    ~Derived(){std::cout<<"Derive destorytor\n";}
};

int main()
{
    Base* base=new Base();
    delete base;
    std::cout<<"-----------------------------------\n";
    Derived* rive=new Derived();
    delete rive;
    std::cout<<"-----------------------------------\n";
    Base* arive=new Derived();
    delete arive;

    std::cin.get();

}