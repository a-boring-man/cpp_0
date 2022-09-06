/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:43:52 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/06 09:32:55 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	
	std::cout << "Contact's default constructor has been called" << std::endl;
	return;
}

Contact::~Contact( void ) {
	
	std::cout << "Contact's default destructor has been called" << std::endl;
	return;
}

std::string	Contact::get_value( int i ) {
	
	if (i == FIRST_NAME)
		return (this->_first_name);
	else if (i == LAST_NAME)
		return (this->_last_name);
	else if (i == NICKNAME)
		return (this->_nickname);
	else if (i == PHONE_NUMBER)
		return (this->_phone_number);
	else
		return (this->_darkest_secret);
}

void	Contact::set_value( int i, std::string str ) {
	
	if (i == FIRST_NAME)
		this->_first_name = str;
	else if (i == LAST_NAME)
		this->_last_name = str;
	else if (i == NICKNAME)
		this->_nickname = str;
	else if (i == PHONE_NUMBER)
		this->_phone_number = str;
	else
		this->_darkest_secret = str;
}
