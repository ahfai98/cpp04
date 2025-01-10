/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:34:08 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 20:28:40 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

//Default constructor
Cure::Cure(): AMateria("cure"){}

//Constructor
Cure::Cure(std::string const &type): AMateria(type){}

// Copy constructor
Cure::Cure(const Cure &src): AMateria(src){}

//Destructor
Cure::~Cure(){}

// Copy assigment operator
Cure &Cure::operator=(const Cure &src)
{
	if (this != &src)
		AMateria::operator=(src);
	return (*this);
}

//Clone function
AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
}
