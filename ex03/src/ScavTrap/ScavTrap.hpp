/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:55 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/21 11:58:37 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "CuteConsole.h"
#include "../ClapTrap/ClapTrap.hpp"

class ScavTrap : virtual public  ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const string_t name);
		ScavTrap(const ScavTrap &other);
		ScavTrap& operator=(const ScavTrap &other);
		~ScavTrap();

		void attack(const std::string& target);

		void	guardGate();
};

#endif
