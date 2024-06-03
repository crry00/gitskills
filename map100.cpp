#include <iostream>
#include <unordered_map>
#include <vector>
#include <map>

struct CityRecord
{
    std::string Name;
    uint64_t Population;
    double Latitude,Longitude;/* data */
};




int main()
{
    std::vector<CityRecord> cities;
    cities.emplace_back("guangzhou",10000000,2.4,7.9);
    cities.emplace_back("guou",10000000,2.4,7.9);
    cities.emplace_back("yangzhou",10000000,2.4,7.9);
    cities.emplace_back("liuzhou",10000000,2.4,7.9);
    cities.emplace_back();
    cities.emplace_back("ouzhou",10000000,2.4,7.9);
    cities.emplace_back("beizhou",10000000,2.4,7.9);

    for (const auto& city:cities)
    {
        if(city.Name=="ouzhou")
        {
            break;
        }
    }

    std::map<std::string,CityRecord> cityMap;
    cityMap["guangzhou"]=CityRecord{"guangzhou",10000000,2.4,7.9};
    cityMap["guou"]=CityRecord{"guou",10000000,2.4,7.9};
    cityMap["beizhou"]=CityRecord{"beizhou",10000000,2.4,7.9};
    cityMap["ouzhou"]=CityRecord{"ouzhou",50,2.4,7.9};
    cityMap["yuzhou"]=CityRecord{"yuzhou",10000000,2.4,7.9};

    CityRecord& recored=cityMap["ouzhou"];

    std::cout<<recored.Population<<std::endl;

    std::cin.get();
}