#include "Fixed.hpp"

Fixed::Fixed()
: value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int arg){
	this->value = arg << fract_bits;
}

Fixed::Fixed(const float arg){
	this->value = roundf(arg * (1 << fract_bits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.value;
}

Fixed &Fixed::operator=(const Fixed &Fixed){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &Fixed)
		this->value = Fixed.value;
	return (*this);
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

float Fixed::toFloat() const{
	return (this->value / (float)(1 << fract_bits));
}

int Fixed::toInt() const{
	return (this->value >> fract_bits);
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj){
	os << obj.toFloat();
	return (os);
}
