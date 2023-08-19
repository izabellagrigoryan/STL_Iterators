// STL_Iterators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <set>

void find_n_del_from_vector(std::vector<int> vec, int n)
{
    auto ptr = vec.begin();
    
    while (ptr != vec.end())
    {
        if (*ptr < n) 
        {
            ptr = vec.erase(ptr);
        }
        else
        {
            ptr++;
        }
    }
    
    for (auto elem : vec)
    {
        std::cout << elem << ", ";
    }
        
    std::cout << std::endl;
}

void find_n_del_from_list(std::list<int> list, int n)
{
    auto ptr = list.begin();

    while (ptr != list.end())
    {
        if (*ptr < n)
        {
            ptr = list.erase(ptr);
        }
        else
        {
            ptr++;
        }
    }

    for (auto elem : list)
    {
        std::cout << elem << ", ";
    }

    std::cout << std::endl;
}

void find_n_del_from_set(std::set<int> set, int n)
{
    auto ptr = set.begin();

    while (ptr != set.end())
    {
        if (*ptr < n)
        {
            ptr = set.erase(ptr);
        }
        else
        {
            ptr++;
        }
    }

    for (auto elem : set)
    {
        std::cout << elem << ", ";
    }
    
    std::cout << std::endl;
}

int main()
{
    std::vector<int> m_vec = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
    std::list<int> m_list { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
    std::set<int> m_set ({ 11, 22, 33, 44, 55, 66, 77, 88, 99 });

    find_n_del_from_vector(m_vec, 55);
    find_n_del_from_list(m_list, 55);
    find_n_del_from_set(m_set, 55);

    return 0;
}
