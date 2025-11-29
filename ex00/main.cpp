#include "Fixed.hpp"

//given code given in subject for testing
int main( void ) 
{
    Fixed a; 
    Fixed b(a); //calls copy constructor
    Fixed c;

    c = b; //calls copy assignment operator 

    //a.setRawBits(4); test I added 
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    
    return 0;
}
