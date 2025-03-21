/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:53 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/21 11:52:25 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hp = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap "<< name <<" Default Constructor Call\n";
}

FragTrap::FragTrap(const string_t Name) : ClapTrap(Name)
{
	hp = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap "<< name <<" Specific Constructor Call\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	name = other.name;
	hp = other.hp;
	energy = other.energy;
	damage = other.damage;
	std::cout << "FragTrap "<< name <<" Copy Constructor Call\n";
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
	std::cout << "FragTrap "<< name <<" Default Destructor Call\n";
}

void	FragTrap::attack(const string_t &target)
{
	if (this->energy == 0)
	{
		printCute("No energy to Attack!", Color::bred);
		return ;
	}
	std::cout << "FragTrap " << "🐺";
	printCute(name, Color::bcyan);
	std::cout << " attacks" << Emoji::explosion << " " <<Emoji::angry;
	printCute(target, Color::bred);
	std::cout << " causing ";
	printCute(toString(damage), Color::bred);
	std::cout << " points of damage!" << std::endl;
	energy--;
}

void	FragTrap::highFivesGuy()
{
	std::cout << "FragTrap 🐺";
	printCute(name, Color::bcyan + Color::bold);
	std::cout << " HighFive!🖐️ " << std::endl;
}
