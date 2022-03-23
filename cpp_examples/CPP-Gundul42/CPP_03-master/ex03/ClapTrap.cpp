/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:31:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/12 18:38:56 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap(void) : _name("Default"), _hitpts(10), _energypts(10), _attckdmg(0)
{
	std::cout << "ClapTrap constructor called, " << _name << ", " << _hitpts;
	std::cout << ", " << _energypts << ", " << _attckdmg << std::endl;
	std::cout << std::endl;
}
		
ClapTrap::ClapTrap(std::string const name) : _hitpts(10), _energypts(10), _attckdmg(0)
{
	this->_name = name;
	std::cout << "ClapTrap constructor called, " << _name << ", " << _hitpts;
	std::cout << ", " << _energypts << ", " << _attckdmg << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
	std::cout << std::endl;
}

//Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	std::cout << this->_name << " says good bye" << std::endl;
	std::cout << std::endl;
}

//Operator overload for '='
ClapTrap&	ClapTrap::operator=(const ClapTrap  &ovr)
{
	this->_name = ovr._name;
	this->_hitpts = ovr._hitpts;
	this->_energypts = ovr._energypts;
	this->_attckdmg = ovr._attckdmg;
	return (*this);
}

//Member functions
void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap attacks " << std::endl;
	std::cout << this->_name << " attacks " << target;
	std::cout << " causing damage of " << this->_attckdmg << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap damage " << std::endl;
	std::cout << this->_name << " took damage of " << amount << " points" << std::endl;
	this->_energypts -= amount;
	std::cout << this->_name << " has " << this->_energypts << " pts left." << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap repaired" << std::endl;
	std::cout << this->_name << " was repaired by " << amount << " points." << std::endl;
	this->_energypts += amount;
	std::cout << this->_name << " now has " << this->_energypts << " points." << std::endl;
	std::cout << std::endl;
}
