/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:50:14 by elisa             #+#    #+#             */
/*   Updated: 2023/09/29 18:27:27 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class Phonebook {
	
	private :

	int nbr;
	int last;
	Contact Contacttab[8];
	
	public :

	Phonebook(void);
	~Phonebook(void);
	void	add(void);
	void	search(void);
	bool	verifnb(std::string str);

};
