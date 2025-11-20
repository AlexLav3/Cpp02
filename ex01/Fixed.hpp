#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <cctype> 

/*
Add the following public constructors and public member functions to your class:
• A constructor that takes a constant integer as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value
should be initialized to 8, like in exercise 00.

• A constructor that takes a constant floating-point number as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value
should be initialized to 8, like in exercise 00.

• A member function float toFloat( void ) const;
that converts the fixed-point value to a floating-point value.

• A member function int toInt( void ) const;
that converts the fixed-point value to an integer value.
And add the following function to the Fixed class files:

• An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as a parameter.
*/
class Fixed
{
    private: 
    int value; 
    static const int fract_bits = 8; 

    public:
    Fixed();
    Fixed(const int arg);
    Fixed(const float arg);
    ~Fixed();
    Fixed(const Fixed &copy);
    Fixed& operator= (const Fixed& Fixed);
    int getRawBits()const;
    void setRawBits(int const raw);
    int toInt( void ) const;
    float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);