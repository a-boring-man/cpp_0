/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:55:14 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/08 10:47:34 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main( void ) {

	PhoneBook		phonebook;
	std::string		imput;

	int	contact_nbr = 0;
	int	max_contact = 0;

	std::cout << "________________________________________" << std::endl;
	std::cout << std::endl << "Welcome to My Awesome PhoneBook" << std::endl;
	std::cout << std::endl << "you can add a contact using the command ADD" << std::endl;
	std::cout << std::endl << "you can then browse trough your contact using SEARCH" << std::endl;
	std::cout << std::endl << "finaly you can kill me by typing EXIT but i'll forget all your data as a punishment" << std::endl;
	std::cout << "________________________________________" << std::endl << std::endl;
	
	getline(std::cin, imput);
	if (std::cin.eof())
		return (0);
	while (imput.compare("EXIT"))
	{
		if (!(imput.compare("ADD")))
		{
			if (contact_nbr > 7)
				contact_nbr = 0;
			phonebook.add(contact_nbr++);
		}

		max_contact = std::max(max_contact, contact_nbr);

		if (!(imput.compare("SEARCH")))
		{
			phonebook.search(max_contact);
		}
		getline(std::cin, imput);
		if (std::cin.eof())
			return(0);
	}

	std::cout << std::endl << "i'll miss you <3" << std::endl << std::endl;
	
	return (0);
}