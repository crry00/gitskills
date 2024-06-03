#include <iostream>
#include <cstring>

class String
{

public:
    String()=default;
    String(const char* string)
    {
        printf("create!\n");
        m_Size=strlen(string);
        m_Data=new char[m_Size];
        memcpy(m_Data,string,m_Size);
    }

    String(const String& other)
    {
        printf("cope!\n");
        m_Size=other.m_Size;
        m_Data=new char[m_Size];
        memcpy(m_Data,other.m_Data,m_Size);
    }

    String(String&& other)
    {
        printf("move!\n");
        m_Size=other.m_Size;
        m_Data=other.m_Data;

        other.m_Data=0;
        other.m_Data=nullptr;
    }

    String& operator=(String&& other)
    {
        printf("move!\n");
        if (this!=&other)
        {
        delete[] m_Data;

        m_Size=other.m_Size;
        m_Data=other.m_Data;

        other.m_Data=0;
        other.m_Data=nullptr;
        }
        return *this;
    }

    ~String()
    {
        printf("Destory!\n");
        delete[] m_Data;
    }

    void Print()
    {
        for(uint32_t i=0;i<m_Size;i++)
        {
            printf("%c",m_Data[i]);
        }
        printf("\n");
    }
private:
    char* m_Data;
    uint32_t m_Size;
};


class Entity
{
public:
    Entity(const String& name)
    :m_name(name)
    {
    }

    Entity( String&& name)
    :m_name(std::move(name))
    {
    }


    void PrintName()
    {
        m_name.Print();
    }
private:
    String m_name;
};



int main()
{
    {
    Entity entity("cherno");
    entity.PrintName();
    }

    String string="Hello";
    String dest(std::move(string));

    std::cin.get();
}