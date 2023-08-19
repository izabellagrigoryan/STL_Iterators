#include "Iterator.h"
 
template class Iterator<int>;

template <typename T>
bool Iterator<T>::operator==(const Iterator<T>& other) const
{
	return (*this->m_ptr == *other.m_ptr);
}

template <typename T>
bool Iterator<T>::operator!=(const Iterator<T>& other) const
{
    return (*this->m_ptr != *other.m_ptr);
}

template <typename T>
Iterator<T>& Iterator<T>::operator=(Iterator<T>* it)
{
    return *it;
}

template <typename T>
T& Iterator<T>::operator*()
{
	return *m_ptr;
}

template <typename T>
T* Iterator<T>::operator->() 
{
    return m_ptr; 
}

template <typename T>
Iterator<T>& Iterator<T>::operator++() 
{
    ++(m_ptr);
    return *this;
}

template <typename T>
Iterator<T> Iterator<T>::operator++(int)
{
    Iterator<T> temp = *this;
    ++(*this);
    return temp;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Iterator<T>& it)
{
    os << *it.m_ptr;
    return os;
}
