/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:39:03 by elisa             #+#    #+#             */
/*   Updated: 2023/11/01 13:12:16 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed {
	
	private:

		int value;
		static const int bit = 8;

	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		void	operator=(const Fixed &copy);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	
};