/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:53 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/19 17:00:36 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	hp = 100;
	energy = 50;
	damage = 30;
}

DiamondTrap::DiamondTrap(const string_t Name) :
			ClapTrap(Name + "_clap_name"), ScavTrap(Name),
			FragTrap(Name)
{
	name = Name;
	hp = FragTrap::hp;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	name = other.name;
	hp = other.hp;
	energy = other.energy;
	damage = other.damage;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
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

DiamondTrap::~DiamondTrap()
{
}

void	DiamondTrap::attack(const string_t &target)
{
	return (ScavTrap::attack(target));
}

void	DiamondTrap::takeDamage(size_t amount)
{
	std::cout << "DiamondTrap 💠";
	printCute(name, Color::bcyan);
	std::cout << " recieved💢 ";
	printCute(toString(amount), Color::bred + Color::bold);
	std::cout << " points of damage!👀" << std::endl;
	if (hp >= amount)
		hp -= amount;
	else
		hp = 0;
}

void	DiamondTrap::beRepaired(size_t amount)
{
	std::cout << "DiamondTrap 💠";
	printCute(name, Color::bcyan + Color::bold);
	std::cout << " Repaired🔨 ";
	printCute(toString(amount), Color::blue + Color::bold);
	std::cout << " HealPoints!!🚑" << std::endl;
	hp += amount;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I'm " << name << " my ClapTrap name is: " << ClapTrap::name << "\n";
}
