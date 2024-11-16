/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:17:07 by jyap              #+#    #+#             */
/*   Updated: 2024/11/16 15:13:42 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//Animal a;  // Error: Cannot instantiate abstract class Animal
	Dog dog;
	Cat cat;

	//Animal a;

	dog.makeSound();  // Outputs: Woof!
	cat.makeSound();  // Outputs: Meow!
	return (0);
}