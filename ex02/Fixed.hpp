#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <cctype> 

/*
Add these four public overloaded member functions to your class:
• A static member function min that takes two references to fixed-point numbers as
parameters, and returns a reference to the smallest one.
• A static member function min that takes two references to constant fixed-point
numbers as parameters, and returns a reference to the smallest one.
• A static member function max that takes two references to fixed-point numbers as
parameters, and returns a reference to the greatest one.
• A static member function max that takes two references to constant fixed-point
numbers as parameters, and returns a reference to the greatest 
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
    Fixed(const Fixed &copy);
    ~Fixed();
    
    Fixed& operator= (const Fixed& Fixed);
    
    int getRawBits()const;
    void setRawBits(int const raw);
    int toInt( void ) const;
    float toFloat( void ) const;

    // operator overloads - comparison
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    //overload arythm
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    //overload increment/decrement
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);