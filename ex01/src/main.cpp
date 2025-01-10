/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:17:07 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 17:58:47 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main()
{
	{
		std::cout << "\n---------- EX01 Main ----------\n" << std::endl;
		Animal *dog = new Dog();
		Animal *cat = new Cat();

		delete dog;
		delete cat;
	}
	{
		std::cout << "\n---------- EX01 First Test ----------\n" << std::endl;
		const Animal	*group[4];

		for (int i = 0; i < 4; i++)
		{
			if (i < 2)
				group[i] = new Dog();
			else
				group[i] = new Cat();
		}
		for (int i = 0; i < 4; i++)
			delete group[i];
	}
	{
		std::cout << "\n---------- EX01 Second Test ----------\n" << std::endl;
		Cat cat1;
		Cat cat2;
		
		cat1.setBrainIdea(0, "I am a cat.");
		cat2 = cat1;
		std::cout << "Cat1 idea: " << cat1.getBrainIdea(0) << std::endl;
		std::cout << "Cat1 idea address: " << &(cat1.getBrainIdea(0)) << std::endl;
		std::cout << "Cat2 idea: " << cat2.getBrainIdea(0) << std::endl;
		std::cout << "Cat2 idea address: " << &(cat2.getBrainIdea(0)) << std::endl;
	}
	{
		std::cout << "\n---------- EX01 Third Test ----------\n" << std::endl;
		Cat cat1;
		cat1.setBrainIdea(0, "I am a cat?");
		Cat cat2(cat1);

		std::cout << "Cat1 idea: " << cat1.getBrainIdea(0) << std::endl;
		std::cout << "Cat1 idea address: " << &(cat1.getBrainIdea(0)) << std::endl;
		std::cout << "Cat2 idea: " << cat2.getBrainIdea(0) << std::endl;
		std::cout << "Cat2 idea address: " << &(cat2.getBrainIdea(0)) << std::endl;
	}
	return (0);
}
