/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:55 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/19 17:54:13 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "CuteConsole.h"
#include "../ClapTrap/ClapTrap.hpp"
#include "../ScavTrap/ScavTrap.hpp"
#include "../FragTrap/FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		string_t name;
	public:
		DiamondTrap();
		DiamondTrap(const string_t name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap& operator=(const DiamondTrap &other);
		~DiamondTrap();

		void	attack(const std::string& target);
		void	takeDamage(size_t amount);
		void	beRepaired(size_t amount);

		void	whoAmI();
};

#endif
