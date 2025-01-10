/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:20:22 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 18:29:49 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria(void)
{
	this->_type = "unknown";
}

//Constructor
AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

// Copy constructor
AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

// Destructor
AMateria::~AMateria(void){}

// Copy assignment operator
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
	std::cout << target.getName() << " was not affected by AMateria Class." << std::endl;
}
