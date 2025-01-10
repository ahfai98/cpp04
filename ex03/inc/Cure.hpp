/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:33:41 by jyap              #+#    #+#             */
/*   Updated: 2025/01/10 19:03:18 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &src);
		virtual ~Cure();
		Cure &operator=(const Cure &src);

		/* Member functions */
		virtual	AMateria	*clone() const;
		virtual	void		use(ICharacter &target);
	protected:
		std::string			_type;
};

#endif
