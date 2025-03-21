/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:55 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/21 11:45:57 by shurtado         ###   ########.fr       */
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
		~ClapTrap();

		virtual void attack(const string_t &target);
		void takeDamage(size_t amount);
		void beRepaired(size_t amount);
};

#endif
