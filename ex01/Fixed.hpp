#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <cctype> 

class Fixed
{
    private: 
    int value; 
    static const int fract_bits; 

    public:
    Fixed();
    Fixed(const int arg);
    Fixed(const float arg);
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed& operator= (const Fixed& Fixed);
    int getRawBits()const;
    void setRawBits(int const raw);
    int toInt( void ) const;
    float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);