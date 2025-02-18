/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:53 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/18 01:52:24 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "NoName";
	hp = 10;
	energy = 10;
	damage = 0;
}

ClapTrap::ClapTrap(const string_t Name)
{
	name = Name;
	hp = 10;
	energy = 10;
	damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	name = other.name;
	hp = other.hp;
	energy = other.energy;
	damage = other.damage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hp = other.hp;
		this->energy = other.energy;
		this->damage = other.damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
}

void	ClapTrap::attack(const string_t &target)
{
	std::cout << "ClapTrap ";
	printCute(name, Color::bblue + Color::bold);
	std::cout << " attacks ";
	printCute(target, Color::blue + Color::bold);
	std::cout << " causing ";
	printCute(toString(damage), Color::bred);
	std::cout << " points of damage!" << std::endl;
	energy--;
}

void	ClapTrap::takeDamage(size_t amount)
{
	std::cout << "ClapTrap ";
	printCute(name, Color::bblue + Color::bold);
	std::cout << " recieved ";
	printCute(toString(amount), Color::blue + Color::bold);
	std::cout << " points of damage!" << std::endl;
	if (hp >= amount)
		hp -= amount;
	else
		hp = 0;
}

void	ClapTrap::beRepaired(size_t amount)
{
	std::cout << "ClapTrap ";
	printCute(name, Color::bblue + Color::bold);
	std::cout << " Repaired ";
	printCute(toString(amount), Color::blue + Color::bold);
	std::cout << " HealPoints!!" << std::endl;
	hp += amount;
}
