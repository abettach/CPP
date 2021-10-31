#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template<typename T>
class Array
{
private:
    T *arr;
    unsigned int n;
public:
    Array() : arr(new T[0]){};
    Array(unsigned int n) : arr(new T[n]), n(n){};
    Array(Array &other) {*this = other;}
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            this->n = other.n;
            this->arr = new T[n];
            for (unsigned int i = 0; i < n; i++)
                this->arr[i] = other.arr[i];
        }
        return *this;
    }
    T &operator[](unsigned int idx) const
    {
        if (idx < 0 || idx >= n)
            throw (Array::outOFlimits());
        return (this->arr[idx]);
    }
    class outOFlimits : public std::exception
    {
        const char *what() const throw() {return ("Element is out of the limits");}
    };

    unsigned int size( void ) const {return (this->n);}
    ~Array(){delete[] this->arr;}
};



#endif