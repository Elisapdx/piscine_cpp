/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:30:59 by elisa             #+#    #+#             */
/*   Updated: 2023/11/01 13:14:01 by elisa            ###   ########.fr       */
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

};

std::ostream &operator<<(std::ostream &stream, const Fixed &x);