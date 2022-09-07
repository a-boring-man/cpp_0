/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:01 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/07 16:26:04 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include <string.h>
#include <cstring>

PhoneBook::PhoneBook( void ) {

	std::cout << "PhoneBook default's constructor has been called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "PhoneBook default's destructor has been called" << std::endl;
	return;
}

std::string	PhoneBook::ft_getline( void ) {

	std::string	str;

	getline(std::cin, str);
	while (str.empty())
	{
		std::cout << "I'm sure you can think of something" << std::endl;
		getline(std::cin, str);
	}

	return (str);
}

void	PhoneBook::add( int i ) {

	std::string	imput;

	std::cout << "Please enter you contact first name" << std::endl;
	imput = PhoneBook::ft_getline();
	_contact[i].set_value(FIRST_NAME, imput);

	std::cout << "Please enter you contact last name" << std::endl;
	imput = PhoneBook::ft_getline();
	_contact[i].set_value(LAST_NAME, imput);

	std::cout << "Please enter you contact nickname" << std::endl;
	imput = PhoneBook::ft_getline();
	_contact[i].set_value(NICKNAME, imput);

	std::cout << "Please enter you contact phone number" << std::endl;
	imput = PhoneBook::ft_getline();
	_contact[i].set_value(PHONE_NUMBER, imput);

	std::cout << "Please enter you contact darkest secret" << std::endl;
	imput = PhoneBook::ft_getline();
	_contact[i].set_value(DARKEST_SECRET, imput);

	return;
}

void	PhoneBook::initial_display( int max ) {

	int			strsize;
	std::string	temp;

	std::cout << std::endl << "_____________________________________________" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRST NAME" << "|" << std::setw(10) << "LAST NAME" << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	for (int contact_nbr = 0; contact_nbr < max; contact_nbr++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << contact_nbr << "|";
		for (int contact_field = 0; contact_field < 3; contact_field++)
		{
			strsize = this->_contact[contact_nbr].get_value(contact_field).size();
			if (strsize > 10)
			{
				std::cout << std::setw(9);
				std::cout << this->_contact[contact_nbr].get_value(contact_field).substr(0, 9) << "." << "|";
			}
			else
			{
				std::cout << std::setw(10);
				std::cout << this->_contact[contact_nbr].get_value(contact_field) << "|";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return;
}

void	PhoneBook::search( int max ) {

	if (!max)
	{
		std::cout << "no contact has been saved, please add a contact first using the command ADD" << std::endl;
		return;
	}
	
	PhoneBook::initial_display(max);

	std::string	imput;
	
	std::cout << "Please enter a contact number" <<std::endl;
	
	imput = ft_getline();
	
	if (!(imput.compare("EXIT")))
		return;
	while (imput.size() > 1 || imput.data()[0] < 0 + '0' || imput.data()[0] > max - 1 + '0')
	{
		std::cout << "their is no contact number : \"" << imput << "\" please enter a correct answer" << std::endl;
		
		imput = ft_getline();
		if (!(imput.compare("EXIT")))
			return;
	}
	int	contact_nbr = stoi(imput);
	while (contact_nbr < 0 || contact_nbr > max - 1)
	{
		std::cout << "this contact doesn't exist, please enter a contact number" << std::endl;
		std::cin >> contact_nbr;
	}
	std::cout << std::endl;

	std::cout << "FIRST NAME :" << this->_contact[contact_nbr].get_value(FIRST_NAME) << std::endl;
	std::cout << "LAST NAME :" << this->_contact[contact_nbr].get_value(LAST_NAME) << std::endl;
	std::cout << "NICKNAME :" << this->_contact[contact_nbr].get_value(NICKNAME) << std::endl;
	std::cout << "PHONE NUMBER :" << this->_contact[contact_nbr].get_value(PHONE_NUMBER) << std::endl;
	std::cout << "DARKEST SECRET :" << this->_contact[contact_nbr].get_value(DARKEST_SECRET) << std::endl;

	std::cout << std::endl;

	return;
}