#include "Fixed.hpp"

//given code given in subject
int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "a is: " << a << std::endl;
    std::cout << "pre increment a " << ++a << std::endl;
    std::cout << "a now is " << a << std::endl;
    std::cout << "post increment a " << a++ << std::endl;

    std::cout << "a now is "<< a << std::endl;
    std::cout << "b now is "<< b << std::endl;

    std::cout << "max " <<Fixed::max( a, b ) << std::endl;
    std::cout << "min " << Fixed::min(a, b) << std::endl;

    //tests I added
    // std::cout << "diving b " << b / 2 << std::endl;
    // std::cout << "multiply a " << a * 10.4f << std::endl;
    
    // a.setRawBits(80);
    // std::cout << a << std::endl;
    
    // Fixed c(a);
    // std::cout << c << std::endl;

    // if(a < b)
    //     std::cout << "a is smaller" << std::endl;
    // if(a == c)
    //     std::cout << "a and c are the same" << std::endl;
    // std::cout << "minus " << a - c << std::endl;
    // std::cout << "plus " << a + b << std::endl;
    // a = 1;
    // std::cout << a.getRawBits() << std::endl; //1 = 256 in raw bits. 

    // float s = sqrt(2);
    // std::cout << "s: "<< s << std::endl;
    // a = s;
    // // If we used 24 fractional bits, it would be more precise, but the representable range would be smaller.
    // //With 8 fractional bits, this is less precise (rounded to nearest 1/256 ≈ 0.00390625). 
    // std::cout << "a: "<< a << std::endl; 
    // std::cout << a.getRawBits() << std::endl; //Internal storage (raw bits) = roundf(s * 2^8) = roundf(1.4142135 * 256) ≈ 362
    // std::cout << a.toInt() << std::endl; //as int

    return 0;
}