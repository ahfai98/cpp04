/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:05:03 by jyap              #+#    #+#             */
/*   Updated: 2024/11/07 17:08:55 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

# define IDEAS_NO 100

class Brain
{
	public:
		Brain();
		Brain(const Brain& src);
		virtual ~Brain();
		Brain& operator=(const Brain& src);
		
		void	setIdea(int i, const std::string& newIdea);
		const std::string&	getIdea(int i) const;
	
	private:
		std::string	_ideas[IDEAS_NO];
};

#endif
