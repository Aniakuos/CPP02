#ifndef FIXED_H
# define FIXED_H

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
    std::ostream & operator<<( std::ostream & o, integer const & rhs);


private:

    int _fixed_point;
    static int const _nbr_fractional_bits;

};

#endif