/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:23:44 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/19 17:27:35 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CuteConsole.h"
#include "ClapTrap/ClapTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"
#include "FragTrap/FragTrap.hpp"


int main()
{
	ClapTrap clap("pepe");
	ClapTrap clap2("pepito");
	clap.attack("pepito");
	clap2.takeDamage(5);
	clap2.beRepaired(3);
	ScavTrap scav("Escave");
	scav.guardGate();
	scav.guardGate();
	FragTrap frag("Ranita");
	frag.highFivesGuy();
	return (0);
}
