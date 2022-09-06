/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:01 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/06 14:08:10 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include <string.h>

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

	std::cout << std::endl << "--------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRST NAME" << "|" << std::setw(10) << "LAST NAME" << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	for(int i = 0; i < max + 1; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i << "|";
		std::cout << std::setw(10);
		std::cout << this->_contact[i].get_value(FIRST_NAME) << "|";
		std::cout << std::setw(10);
		std::cout << this->_contact[i].get_value(LAST_NAME) << "|";
		std::cout << std::setw(10);
		std::cout << this->_contact[i].get_value(NICKNAME) << "|" << std::endl;
	}
}

