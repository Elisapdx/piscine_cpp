/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:39:24 by elisa             #+#    #+#             */
/*   Updated: 2023/11/01 13:17:31 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed {
	
	private:

		int value;
		static const int bit = 8;

	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		void	operator=(const Fixed &copy);
		
		Fixed(const int nb);
		Fixed(const float nb);
		
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		

/**************COMPARISON OPERATOR**************/
		bool operator>(Fixed const &x);
		bool operator<(Fixed const &x);
		bool operator>=(Fixed const &x);
		bool operator<=(Fixed const &x);
		bool operator==(Fixed const &x);
		bool operator!=(Fixed const &x);

/**************ARITHMETIC OPERATOR**************/
		Fixed operator+(Fixed const &x);
		Fixed operator-(Fixed const &x);
		Fixed operator*(Fixed const &x);
		Fixed operator/(Fixed const &x);

/****INCREMENTATION & DECREMENTATION OPERATOR****/
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

/**************OVERLOADED FUNCTIONS**************/
		const static Fixed& max(const Fixed& x, const Fixed& y);
		const static Fixed& min(const Fixed& x, const Fixed& y);
		static Fixed& max(Fixed& x, Fixed& y);
		static Fixed& min(Fixed& x, Fixed& y);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &x);