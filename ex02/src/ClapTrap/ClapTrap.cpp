/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:53 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/24 09:24:01 by shurtado         ###   ########.fr       */
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
	if (this->energy == 0)
	{
		printCute("No energy to Attack!", Color::bred);
		return ;
	}
	std::cout << "ClapTrap " << Emoji::wink;
	printCute(name, Color::bcyan);
	std::cout << " attacks" << Emoji::explosion << " " <<Emoji::angry;
	printCute(target, Color::bred);
	std::cout << " causing ";
	printCute(toString(damage), Color::bred);
	std::cout << " points of damage!" << std::endl;
	energy--;
}

void	ClapTrap::takeDamage(size_t amount)
{
	std::cout << "ClapTrap 😵";
	printCute(name, Color::bcyan);
	std::cout << " recieved💢 ";
	printCute(toString(amount), Color::bred + Color::bold);
	std::cout << " points of damage!👀" << std::endl;
	if (hp >= amount)
		hp -= amount;
	else
		hp = 0;
}

void	ClapTrap::beRepaired(size_t amount)
{
	if (this->energy == 0)
	{
		printCute("No energy to Repair!", Color::bred);
		return ;
	}
	std::cout << "ClapTrap 😊";
	printCute(name, Color::bcyan + Color::bold);
	std::cout << " Repaired🔨 ";
	printCute(toString(amount), Color::blue + Color::bold);
	std::cout << " HealPoints!!🚑" << std::endl;
	hp += amount;
	energy--;
}
