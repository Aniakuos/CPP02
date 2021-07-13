#include <iostream>

Fixed::Fixed( void ) : _fixed_point(0)
{
    
}

Fixed::~Fixed( void )
{
    
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

Fixed::~Fixed( void )
{

}

Fixed & operator=( Fixed const & rhs )
{
    
}

int getRawBits( void ) const
{
    return (this->_fixed_point );
}

void setRawBits (int const raw )
{
    this->_fixed_point = raw;
}