#include "../inc/Fire.hpp"

Fire::Fire(): AMateria("fire"){}

Fire::Fire(std::string const &type): AMateria(type){}

Fire::Fire(const Fire &src): AMateria(src){}

Fire::~Fire(){}

Fire &Fire::operator=(const Fire &src)
{
	if (this != &src)
		AMateria::operator=(src);
	return (*this);
}

AMateria	*Fire::clone() const
{
	return (new Fire(*this));
}

void	Fire::use(ICharacter &target)
{
	std::cout << "* shoots a Fire Ball at " << target.getName() << " *" << std::endl; 
}
