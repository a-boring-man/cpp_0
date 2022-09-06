/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:01 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/06 15:04:46 by jrinna           ###   ########lyon.fr   */
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

void	PhoneBook::search( int max ) {

	int			strsize;
	std::string	temp;

	std::cout << std::endl << "_____________________________________________" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRST NAME" << "|" << std::setw(10) << "LAST NAME" << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	for (int i = 0; i < max + 1; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i << "|";
		for (int j = 0; j < 3; j++)
		{
			strsize = this->_contact[i].get_value(j).size();
			if (strsize > 10)
			{
				std::cout << std::setw(9);
				std::cout << this->_contact[i].get_value(j).substr(0, 9) << "." << "|";
			}
			else
			{
				std::cout << std::setw(10);
				std::cout << this->_contact[i].get_value(j) << "|";
			}
		}
		std::cout << std::endl;
	}
}

