#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

public:

    Fixed( void );
    Fixed( int const param );
    Fixed( float const param );
    Fixed( Fixed const & src );
    ~Fixed( void );
    Fixed & operator=( Fixed const & rhs );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    bool operator>(Fixed const & o) const;
    bool operator<(Fixed const & o) const;
    bool operator>=(Fixed const & o) const;
    bool operator<=(Fixed const & o) const;
    bool operator==(Fixed const &o) const;
    bool operator!=(Fixed const &o) const;
    Fixed operator+(Fixed const &o) const;
    Fixed operator-(Fixed const &o) const;
    Fixed operator*(Fixed const &o) const;
    Fixed operator/(Fixed const &o) const;
    Fixed operator++( void );
    Fixed operator++( int );

private:

    int _fixed_point;
    static int const _nbr_fractional_bits;

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);


#endif