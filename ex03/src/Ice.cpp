#include "../inc/Ice.hpp"

/* Default constructor function of Ice class */
Ice::Ice() : AMateria("ice")
{
}

/* Constructor function for string input of Ice class */
Ice::Ice(std::string const &type) : AMateria(type)
{
	this->_type = type;
}

/* Copy constructor function of Ice class */
Ice::Ice(const Ice &src): AMateria(src._type)
{
	*this = src;
}

/* Destructor function of Ice class */
Ice::~Ice()
{
}

/* Copy assignation operator function of Character class */
Ice& Ice::operator=(const Ice& src)
{
	this->_type = src._type;
	return (*this);
}

/* Clone function to create a copy of Ice */
AMateria	*Ice::clone() const
{
	AMateria *newIce;

	try
	{
		newIce = new Ice;
		return (newIce);
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << '\n';
		throw (error);
		return (NULL);
	}
}

/* Use function to use Ice on a target */
void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}