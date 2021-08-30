#include "Fixed.hpp"
#include <cmath>

int const Fixed::_nbr_fractional_bits = 8;

Fixed::Fixed( void ) : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const param )
{
    //(1<<8) is 1*(2^8) is 256
    this->_fixed_point = param * (1 << this->_nbr_fractional_bits);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const param )
{
    this->_fixed_point = roundf(param * (1 << this->_nbr_fractional_bits));
    std::cout << "Float constructor called" << std::endl;
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
    //if ( this != &rhs )
    this->_fixed_point = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return ( this->_fixed_point );
}

void Fixed::setRawBits (int const raw )
{
    this->_fixed_point = raw;
}

float Fixed::toFloat( void ) const{
    float var;
    var = float(this->_fixed_point) / float(1 << this->_nbr_fractional_bits);
    return (var);
}

int Fixed::toInt( void ) const{
    int var;
    var = roundf(_fixed_point / (1 << _nbr_fractional_bits));
    return (var);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}