/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:55 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/19 17:05:57 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "CuteConsole.h"

class ClapTrap
{
	protected:
		std::string	name;
		size_t		hp;
		size_t		energy;
		size_t		damage;
	public:
		ClapTrap();
		ClapTrap(const string_t name);
		ClapTrap(const ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);
		virtual ~ClapTrap();

		virtual void attack(const string_t &target);
		virtual void takeDamage(size_t amount);
		virtual void beRepaired(size_t amount);
};

#endif
