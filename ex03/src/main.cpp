/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:17:07 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 20:44:04 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Fire.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fire());
	
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	tmp = src->createMateria("fire");
	bob->equip(tmp);
	bob->use(0, *me);
	bob->use(1, *me);
	bob->use(2, *me);
	bob->unequip(0);
	std::cout << "=================" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(0);
	delete bob;
	delete me;
	delete src;
	return 0;
}
