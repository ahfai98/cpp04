/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:20:22 by jyap              #+#    #+#             */
/*   Updated: 2024/11/16 16:46:21 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria(void)
{
	this->_type = "unknown";
}

/* Constructor function for string input of Amateria class */
AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

/* Copy constructor function of AMateria class */
AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

/* Destructor function of AMateria class */
AMateria::~AMateria(void){}

/* Copy assignation operator function of AMateria class */
AMateria	&AMateria::operator=(const AMateria &src)
{
	this->_type = src._type;
	return (*this);
}

/* Getter function for type of AMateria class */
const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

/* Use function, to be used on the target */
void	AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << " was not affected by AMateria instance." << std::endl;
}