/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:53 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/24 09:27:07 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hp = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(const string_t Name) : ClapTrap(Name)
{
	hp = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	name = other.name;
	hp = other.hp;
	energy = other.energy;
	damage = other.damage;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap()
{
}

void	FragTrap::attack(const string_t &target)
{
	std::cout << "FragTrap " << "🐺";
	printCute(name, Color::bcyan);
	std::cout << " attacks" << Emoji::explosion << " " <<Emoji::angry;
	printCute(target, Color::bred);
	std::cout << " causing ";
	printCute(toString(damage), Color::bred);
	std::cout << " points of damage!" << std::endl;
	energy--;
}

void	FragTrap::takeDamage(size_t amount)
{
	std::cout << "FragTrap 😵";
	printCute(name, Color::bcyan);
	std::cout << " recieved💢 ";
	printCute(toString(amount), Color::bred + Color::bold);
	std::cout << " points of damage!👀" << std::endl;
	if (hp >= amount)
		hp -= amount;
	else
		hp = 0;
}

void	FragTrap::beRepaired(size_t amount)
{
	if (this->energy == 0)
	{
		printCute("No energy to Repair!", Color::bred);
		return ;
	}
	std::cout << "FragTrap 🐺";
	printCute(name, Color::bcyan + Color::bold);
	std::cout << " Repaired🔨 ";
	printCute(toString(amount), Color::blue + Color::bold);
	std::cout << " HealPoints!!🚑" << std::endl;
	hp += amount;
	energy--;
}

void	FragTrap::highFivesGuy()
{
	std::cout << "FragTrap 🐺";
	printCute(name, Color::bcyan + Color::bold);
	std::cout << " HighFive!🖐️ " << std::endl;
}
