#include<iostream>
#include<string>

class Entity
{
    public:
    virtual void Printname(){}
};

class Player:public Entity
{
    public:
};

class Enemy:public Entity
{
    public:
};

int main()
{
    Player* player=new Player();
    Entity* e=player;
    Entity* e1=new Enemy();
    Player* p0=dynamic_cast<Player*>(e1);
    if(p0)
    {
        std::cout<<"pok"<<std::endl;
    }
    Player* p1=dynamic_cast<Player*>(e);
    if(p1)
    {
        std::cout<<"p1ok"<<std::endl;
    }
    std::cin.get();
}