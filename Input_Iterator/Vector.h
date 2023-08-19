#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include "Iterator.h"
template <typename T> class Iterator;

template  <typename T>
class Vector 
{
public:

    int get_size()
    {
        return m_size;
    }

    void init();
    void push_back(T element);
    void pop_back() { m_size--; }
    T operator[](int i) const;
    T& operator[](int i);
    void erase(int element);
    void print();

    Iterator<T>& begin();
    Iterator<T>& end();

    Iterator<T>* it_ptr;

    Vector()
    {
        m_capacity = 5;
        m_size = 0;
        m_ptr = new T[m_capacity];

        it_ptr = new Iterator<T>();
    }

    ~Vector()
    {
        delete[] m_ptr;
    };

private:
    int m_capacity;
    int m_size;
    T* m_ptr;

};

#endif