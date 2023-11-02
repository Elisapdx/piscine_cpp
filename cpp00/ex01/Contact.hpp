/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:50:18 by elisa             #+#    #+#             */
/*   Updated: 2023/09/29 17:32:39 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>

class Contact {
	
	private:
	
	std::string l_name;
	std::string nickname;
	std::string phone_num;
	std::string secret;
	
	public :
	
	std::string f_name;
	Contact(void);
	~Contact(void);
	void	setf_name(std::string f_name);
	void	setl_name(std::string l_name);
	void	setnickname(std::string nickname);
	void	setphone_num(std::string phone_num);
	void	setsecret(std::string secret);

	std::string getf_name(void) const;
	std::string getl_name(void) const;
	std::string getnickname(void) const;
	std::string getphone_num(void) const;
	std::string getsecret(void) const;
	std::string size_ten(std::string str) const;
	std::string Info(void);
	void Infoplus(void);
};
