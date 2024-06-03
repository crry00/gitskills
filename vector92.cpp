#include <iostream>
#include "Vector.h"

template<typename T>
void PrintVector(const Vector<T>& vector)
{
    for(size_t i=0;i<vector.Size();i++)
    {
        std::cout<<vector[i]<<std::endl;
    }
    std::cout<<"------------------------\n";
}







struct Vector3
{
   float x=0.0f,y=0.0f,z=0.0f;
   Vector3(){}
   Vector3(float scalar)
   :x(scalar),y(scalar),z(scalar){}

   Vector3(float x,float y,float z)
   :x(x),y(y),z(z) {}


   Vector3(const Vector3& other)
   : x(other.x),y(other.y),z(other.z)
   {
    std::cout<<"Copy!\n";
   }

   Vector3(Vector3&& other)
   : x(other.x),y(other.y),z(other.z)
   {
    std::cout<<"Move!\n";
   }

    ~Vector3()
    {
        std::cout<<"Destory\n";
    }

    Vector3& operator=(const Vector3& other)
    {
        std::cout<<"Copy!\n";
        x=other.x;
        y=other.y;
        z=other.z;
        return *this;
    }
    Vector3& operator=(Vector3&& other)
    {
        std::cout<<"Move!\n";
        x=other.x;
        y=other.y;
        z=other.z;
        return *this;
    }


};

void PrintVector(const Vector<Vector3>& vector)
{
    for(size_t i=0;i<vector.Size();i++)
    {
        std::cout<<vector[i].x<<vector[i].y<<vector[i].z<<std::endl;
    }
    std::cout<<"------------------------\n";
}



int main()
{
    Vector<Vector3> vector;


    // vector.PushBack(Vector3(1.0f));
    // vector.PushBack(Vector3(1.f,2.f,3.f));
    vector.EmplaceBack(4.f,5.f,6.f);
    vector.EmplaceBack(5.f,5.f,6.f);
    vector.EmplaceBack(6.f,5.f,6.f);
    vector.EmplaceBack(7.f,5.f,6.f);
    vector.EmplaceBack(8.f,5.f,6.f);
    vector.PopBack();
    vector.EmplaceBack(9.f,5.f,6.f);
    vector.EmplaceBack();

    //vector.PushBack(Vector3());

    
    PrintVector(vector);

    std::cin.get();
}