#include <iostream>


struct vector2
{
    float x,y;
};

struct vector4
{

    union 
    {
        struct 
        {
            float x,y,z,w;/* data */
        };
        
        struct 
        {
            vector2 a,b;/* data */
        };
    };


    
    // vector2& getA()
    // {
    //     return *(vector2*)&x;
    // }


};


void printvector2(const vector2& vector)
{
    std::cout<<vector.x<<","<<vector.y<<std::endl;
}

int main()
{
    struct Union
    {
         union 
        {
            float a;
            int b;
        };
    
    };
    Union u;
    u.a=2.0f;
    std::cout<<u.a<<","<<u.b<<std::endl;


    vector4 vector={1.0f,2.0f,3.0f,4.0f};
    // vector4 vector;
    printvector2(vector.a);
    // vector.x=2.0f;
    std::cout<<"size:"<<sizeof(vector)<<std::endl;
    std::cin.get();
}