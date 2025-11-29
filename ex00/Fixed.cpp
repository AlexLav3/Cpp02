#include "Fixed.hpp"

const int Fixed::fract_bits = 8;
Fixed::Fixed() : value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.value;
}

Fixed& Fixed::operator= (const Fixed& Fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &Fixed)
        this->value = Fixed.value;
    return *this;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return value; 
}

void Fixed::setRawBits(int const raw){
    this->value = raw;
}
