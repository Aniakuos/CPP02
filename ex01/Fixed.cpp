#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const param ) : _nbr_fractional_bits(8)
{
    _fixed_point = param * (1 << this->_nbr_fractional_bits);
    std::cout << "A constructor that takes a constant integer as a parameter" << std::endl;
}

Fixed::Fixed( int const param ) : _nbr_fractional_bits(8)
{
    _fixed_point = roundf(param * (1 << this->_nbr_fractional_bits));
    std::cout << "A constructor that takes a constant floating as a parameter" << std::endl;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
    std::cout << "Assignation operator called" << std::endl;
    if ( this != &rhs )
        this->_fixed_point = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return ( this->_fixed_point );
}

void Fixed::setRawBits (int const raw )
{
    this->_fixed_point = raw;
}

float Fixed::toFloat( void ) const{
    float var;
    var = this->_fixed_point / (1 << _nbr_fractional_bits);
    return (var);
}

int toInt( void ) const{
    int var;
    var = roundf(this->_fixed_point / (1 << _nbr_fractional_bits));
    return (var);
}

std::ostream & operator<<( std::ostream & o, integer const & rhs)
{
    
}