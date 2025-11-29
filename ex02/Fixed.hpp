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
    Fixed(const Fixed &other);
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

    //min&max
    static Fixed& min(Fixed& n1, Fixed& n2);
    static const Fixed& min(const Fixed& n1, const Fixed& n2);

    static Fixed& max(Fixed& n1, Fixed& n2);
    static const Fixed& max(const Fixed& n1, const Fixed& n2);

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
