/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:55 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/21 11:58:30 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "CuteConsole.h"
#include "../ClapTrap/ClapTrap.hpp"

class FragTrap : virtual public  ClapTrap
{
	public:
		FragTrap();
		FragTrap(const string_t name);
		FragTrap(const FragTrap &other);
		FragTrap& operator=(const FragTrap &other);
		~FragTrap();

		void attack(const std::string& target);
		void	highFivesGuy();
};

#endif
