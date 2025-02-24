/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:01:37 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/18 01:41:56 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_HPP
#define COLOR_HPP

#include "../../inc/CuteConsole.h"
#include <sstream>

namespace Color
{
	// Reset para volver al color normal
	extern string_t reset   ;

	// 🎨 8 Colores Básicos
	extern string_t black;
	extern string_t red;
	extern string_t green;
	extern string_t yellow;
	extern string_t blue;
	extern string_t magenta;
	extern string_t cyan;
	extern string_t white;

	// ✨ 8 Colores Brillantes
	extern string_t bblack;
	extern string_t bred;
	extern string_t bgreen;
	extern string_t byellow;
	extern string_t bblue;
	extern string_t bmagenta;
	extern string_t bcyan;
	extern string_t bwhite;

	extern string_t bold;         // Negrita
	extern string_t dim;          // Atenuado
	extern string_t italic;       // Cursiva (No siempre funciona)
	extern string_t underline;    // Subrayado
	extern string_t blink;        // Parpadeo
	extern string_t reverse;      // Invertido
	extern string_t hidden;       // Oculto

	// 🎨 8 Colores de Fondo
	extern string_t bg_black;
	extern string_t bg_red;
	extern string_t bg_green;
	extern string_t bg_yellow;
	extern string_t bg_blue;
	extern string_t bg_magenta;
	extern string_t bg_cyan;
	extern string_t bg_white;

	// ✨ 8 Fondos Brillantes
	extern string_t bbg_black;
	extern string_t bbg_red;
	extern string_t bbg_green;
	extern string_t bbg_yellow;
	extern string_t bbg_blue;
	extern string_t bbg_magenta;
	extern string_t bbg_cyan;
	extern string_t bbg_white;
}

void printCute(string_t message, string_t color);
std::string toString(size_t num);

#endif
