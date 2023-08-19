// Input_Iterator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Iterator.h"

int main()
{
    Vector<int> m_vec;
    m_vec.init();
    m_vec.print();

    Iterator<int> m_it = m_vec.begin();

    for (; m_it != m_vec.end(); m_it++)
    {
        std::cout << *m_it << ",  ";
    }

    std::cout << std::endl;

    return 0;
}
