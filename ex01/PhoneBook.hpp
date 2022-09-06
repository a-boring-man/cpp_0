/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:35:59 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/06 15:13:32 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {

	public :

		PhoneBook( void );
		~PhoneBook( void );

		void	add( int i );
		void	search( int max );
		void	initial_display( int max );

	private :

		Contact		_contact[8];
		std::string	ft_getline( void );
		
};

#endif