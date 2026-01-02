# Cpp02 module from 42, on Ad-hoc polymorphism, operator overloading and the Orthodox Canonical class form

### General Requirements: 
    -Wall -Werror -Wextra and -std=c++98 flags 
    -C++11 (and derived forms) and Boost libraries are forbidden.
    -using namespace and friend is not allowed
    -Orthodox Canonical Form

## Ex00:
Creating a class that represents a fixed-point number 
private and public members were specified in subject

## Ex01
Adding more attributes to the previous class, to represent more values, as in ex00 only value 0.0 could be represented
Member functions to convert floats-fixed points and vice-versa, and an overload operator. 

## Ex02 
More overload operators and arythmetic to be added to the class.  

## Fixed-Point Numbers 
A fixed-point number is a way to represent real numbers using integers by storing a fixed number of digits of their fractional part

Unlike floating-point numbers, fixed-point numbers:

    -Do not store an exponent
    -Have constant precision
    -Are deterministic and predictable


The integer value stores a scaled version of the real number

The scale is 2^fract_bits

The scale is needed for where the “decimal point” is. This method divides the number into an integer part and a fractional part, with a fixed number of digits allocated for each portion, ensuring the decimal point does not shift.

## Personal thoughts on the exercises 
Besides only doing what is required by the subject, it is important to understand the use of fixed points (When are they needed), how floating points actually work, what is the rounding error due to.
In this subject, is was required to have the fractional bits set as 8, this leads to a lower accuracy than floating points, to increase accuracy, fractional bits would be increased. 

