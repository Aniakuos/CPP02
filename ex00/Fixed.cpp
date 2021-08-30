#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
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

int const Fixed::_nbr_fractional_bits = 8;