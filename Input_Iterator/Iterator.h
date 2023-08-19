#ifndef ITERATOR_H
#define ITERATOR_H

#include "Vector.h"

template <typename T>
class Iterator
{
public:

	Iterator<T>& operator++();
	Iterator<T> operator++(int);
	bool operator==(const Iterator<T>& other) const;
	bool operator!=(const Iterator<T>& other) const;
	T& operator*();
	T* operator->();
	Iterator<T>& operator=(Iterator<T>* p);

	T* m_ptr;

	friend std::ostream& operator<<(std::ostream& os, const Iterator<T>& it);

	Iterator() {}
	~Iterator(){}
};

#endif
