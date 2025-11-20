#pragma once
#include <iostream>
#include <string>
#include <cctype> 

class Fixed
{
    private: 
    int value; 
    static const int fract_bits = 8; 

    public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &copy);
    Fixed& operator= (const Fixed& Fixed);
    int getRawBits()const;
    void setRawBits(int const raw);
};