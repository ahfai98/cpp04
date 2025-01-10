#include "../inc/Ice.hpp"

Ice::Ice(): AMateria("ice"){}

Ice::Ice(std::string const &type): AMateria(type){}

Ice::Ice(const Ice &src): AMateria(src){}

Ice::~Ice(){}

Ice &Ice::operator=(const Ice &src)
{
	if (this != &src)
		AMateria::operator=(src);
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
