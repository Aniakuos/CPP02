#ifndef FIXED_H
# define FIXED_H

class{

public:

    Fixed( void );
    Fixed( Fixed const & src );
    ~Fixed( void );
    Fixed & operator=( Fixed const & rhs );
    int getRawBits( void ) const;
    void setRawBits( int const raw );


private:

    int _fixed_point;
    static int const _nbr_fractional_bits;

};

#endif