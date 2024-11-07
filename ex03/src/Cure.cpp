/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:34:08 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 20:40:09 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

/* Default constructor function of Cure class */
Cure::Cure() : AMateria("cure")
{
}

/* Constructor function for string input of Cure class */
Cure::Cure(std::string const &type) : AMateria(type)
{
	this->_type = type;
}

/* Copy constructor function of Cure class */
Cure::Cure(const Cure &src) : AMateria(src._type)
{
	*this = src;
}

/* Destructor function of Cure class */
Cure::~Cure()
{
}

/* Copy assignation operator function of Character class */
Cure	&Cure::operator=(const Cure &src)
{
	this->_type = src._type;
	return (*this);
}

/* Clone function to create a copy of Cure */
AMateria	*Cure::clone() const
{
	AMateria *newCure;

	try
	{
		newCure = new Cure;
		return (newCure);
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << '\n';
		throw (error);
		return (NULL);
	}
}

/* Use function to use Cure on a target */
void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
}