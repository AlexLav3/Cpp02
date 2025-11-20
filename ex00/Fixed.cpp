#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = copy.value;
}

Fixed& Fixed::operator= (const Fixed& Fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value; 
}