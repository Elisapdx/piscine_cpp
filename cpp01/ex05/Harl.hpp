/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:29:05 by elisa             #+#    #+#             */
/*   Updated: 2023/10/25 16:14:09 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl {
	
	private:

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
	
		Harl();
		~Harl();
		void    complain(std::string level);
	
};