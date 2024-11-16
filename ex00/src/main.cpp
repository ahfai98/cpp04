/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:17:07 by jyap              #+#    #+#             */
/*   Updated: 2024/11/16 14:45:40 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main()
{
	{
		std::cout << "\n---------- EX00 Main ----------\n" << std::endl;
		const Animal *ani = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();

		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		dog->makeSound(); //will output the cat sound!
		cat->makeSound();
		ani->makeSound();
		delete (ani);
		delete (dog);
		delete (cat);
	}
	{
		std::cout << "\n---------- EX00 Test ----------\n" << std::endl;
		const WrongAnimal *w_animal = new WrongAnimal();
		const WrongAnimal *w_cat = new WrongCat();
		
		std::cout << w_animal->getType() << std::endl;
		std::cout << w_cat->getType() << std::endl;
		w_animal->makeSound();
		w_cat->makeSound();
		delete (w_animal);
		delete (w_cat);
	}
	return (0);
}