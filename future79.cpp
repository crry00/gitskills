#include<future>
#include<iostream>
#include<vector>
#include<mutex>


static std::mutex s_mesh;

static void LoadMesh(int a,std::vector<int>& vec)
{
    
    for (int i=0;i<a;i++)
    {
        std::cout<<"Load"<<i<<std::endl;
    }
    std::lock_guard<std::mutex> lock(s_mesh);
    vec.push_back(a);
}

int main()
{
    std::vector<int> vect={1,1,2,3,4};
    std::vector<int> vect1;
    for(const auto& ve:vect)
    {

        std::async(std::launch::async,LoadMesh,ve,vect1);
    }
    
}