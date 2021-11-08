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
        T &operator[](unsigned int n) const
        {
            if (n < 0 || n >= this->n)
                throw (Array::OutOfRange());
            return (this->arr[n]);
        }
        class OutOfRange : public std::exception
        {
            const char *what() const throw() {return ("Element is out of the limits");}
        };
    
        unsigned int size( void ) const { return (this->n); }
        ~Array(){delete[] this->arr;}
};



#endif