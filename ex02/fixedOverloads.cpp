#include "Fixed.hpp"

// comparisons
bool Fixed::operator==(const Fixed &other) const{
    //std::cout << "== called" << std::endl;
    return this->value == other.value;
}

bool Fixed::operator!=(const Fixed &other) const{
    return this->value != other.value;
}

bool Fixed::operator>(const Fixed &other) const{
    return this->value > other.value;
}
 
bool Fixed::operator<(const Fixed &other) const{
    //std::cout << "< called" << std::endl;
    return this->value < other.value;
}

bool Fixed::operator>=(const Fixed &other) const{
    return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed &other) const{
    return this->value <= other.value;
}

//operations
Fixed Fixed::operator+(const Fixed &other) const{
    Fixed result;
    result.setRawBits(value + other.value);
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const{
    Fixed result;
    result.setRawBits(value - other.value);
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const{
    Fixed result;
    long tmp = (long)this->value * (long)other.value;
    result.setRawBits(tmp >> fract_bits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const{
    Fixed result;
    long tmp = ((long)this->value << fract_bits) / other.value;
    result.setRawBits(tmp);
    return result;
}

//overload incredement/decrement
Fixed& Fixed::operator++() {
    value += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    value += 1;
    return temp;
}

Fixed &Fixed::operator--(){
    value -= 1;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed temp(*this);
    value -= 1;
    return temp;
}


