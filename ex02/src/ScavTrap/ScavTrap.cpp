/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:53 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/24 09:25:31 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hp = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const string_t Name) : ClapTrap(Name)
{
	hp = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	name = other.name;
	hp = other.hp;
	energy = other.energy;
	damage = other.damage;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
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

ScavTrap::~ScavTrap()
{
}

void	ScavTrap::attack(const string_t &target)
{
	if (this->energy == 0)
	{
		printCute("No energy to Attack!", Color::bred);
		return ;
	}
	std::cout << "ScavTrap " << Emoji::wink;
	printCute(name, Color::bcyan);
	std::cout << " attacks" << Emoji::explosion << " " <<Emoji::angry;
	printCute(target, Color::bred);
	std::cout << " causing ";
	printCute(toString(damage), Color::bred);
	std::cout << " points of damage!" << std::endl;
	energy--;
}

void	ScavTrap::takeDamage(size_t amount)
{
	std::cout << "ScavTrap 😵";
	printCute(name, Color::bcyan);
	std::cout << " recieved💢 ";
	printCute(toString(amount), Color::bred + Color::bold);
	std::cout << " points of damage!👀" << std::endl;
	if (hp >= amount)
		hp -= amount;
	else
		hp = 0;
}

void	ScavTrap::beRepaired(size_t amount)
{
	if (this->energy == 0)
	{
		printCute("No energy to Repair!", Color::bred);
		return ;
	}
	std::cout << "ScavTrap 😊";
	printCute(name, Color::bcyan + Color::bold);
	std::cout << " Repaired🔨 ";
	printCute(toString(amount), Color::blue + Color::bold);
	std::cout << " HealPoints!!🚑" << std::endl;
	hp += amount;
	energy--;
}

void	ScavTrap::guardGate()
{
	static bool	guard;

	if (!guard)
	{
		std::cout << "ScavTrap 🤖";
		printCute(name, Color::bcyan + Color::bold);
		std::cout << " Is on Guard! 🛡️" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap 🤖";
		printCute(name, Color::bcyan + Color::bold);
		std::cout << " Is ready to fight! 👊" << std::endl;
	}
	guard = !guard;
}
