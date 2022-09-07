/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:35:59 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/07 16:26:44 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {

	public :

		PhoneBook( void );
		virtual ~PhoneBook( void );

		void	add( int i );
		void	search( int max );
		void	initial_display( int max );

	private :

		Contact		_contact[8];
		std::string	ft_getline( void );
		
};

#endif