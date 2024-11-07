/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 20:13:49 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

// Constructor
Character::Character()
{
	std::cout << "(Character) Default constructor called." << std::endl;
	this->_name = "Default";
	for (int i = 0; i < MAX_INV_SLOT; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const& name)
{
	std::cout << "(Character) named" << name << "created." << std::endl;
	this->_name = name;
	for (int i = 0; i < MAX_INV_SLOT; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& src)
{
	std::cout << "(Character) Copy constructor called." << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << "(Character) Destructor called." << std::endl;
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (_inventory[i] != NULL)
			delete(_inventory[i]);
	}
}

Character& Character::operator=(const Character& src)
{
	std::cout << "(Character) Assignment operator called." << std::endl;
	if (this == &src)
		return (*this);
	const AMateria *temp;
	this->_name = src._name;
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		temp = src.getMateria(i);
		if (temp != NULL)
			_inventory[i] = temp->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

const std::string& Character::getName() const
{
	return (this->_name);
}

/* Getter function for materia of Character class */
const AMateria	*Character::getMateria(int i) const
{
	if (i < 0 || i >= MAX_INV_SLOT)
		return (NULL);
	return (this->_inventory[i]);
}

/* Equips materia in inventory if it exists, else do nothing */
void	Character::equip(AMateria *m)
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

/* Unequips materia in inventory if it exists, else do nothing */
void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= MAX_INV_SLOT || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx] = NULL;
}

/* Use materia in inventory if it exists, else do nothing */
void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= MAX_INV_SLOT || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use(target);
}