/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:17:07 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 18:03:34 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	// Uncommenting the next line will cause a compilation error
	//Animal a;  // Error: Cannot instantiate abstract class Animal

	Dog dog;
	Cat cat;

	//Animal a;

	std::cout << "Dog: ";
	dog.makeSound();  // Outputs: Woof!

	std::cout << "Cat: ";
	cat.makeSound();  // Outputs: Meow!
	return (0);
}