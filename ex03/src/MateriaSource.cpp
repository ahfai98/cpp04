/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:26:20 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 20:29:21 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

/* Default constructor function of Cure class */
MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
		this->_inventory[i] = NULL;
}

/* Copy constructor function of Cure class */
MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

/* Destructor function of Cure class */
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
}

/* Copy assignation operator function of Character class */
MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	const AMateria	*temp;
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		temp = src.getMateria(i);
		if (temp != NULL)
			this->_inventory[i] = temp->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

/* Getter function for materia in inventory of MateriaSouce class */
const AMateria	*MateriaSource::getMateria(int i) const
{
	if (i < 0 || i > MAX_INV_SLOT)
		return (NULL);
	return (this->_inventory[i]);
}

/* Puts materia into inventory */
void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			break ;
		}
	}
}

/* Returns a clone of a Materia */
AMateria	*MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (this->_inventory[i] == NULL)
			break ;
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return (0);
}