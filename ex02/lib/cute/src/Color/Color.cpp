/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:01:49 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/18 01:48:52 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Color.hpp"

namespace Color
{
	string_t reset  = "\033[0m";

	// 🎨 8 Colores Básicos
	string_t black   = "\033[30m";
	string_t red     = "\033[31m";
	string_t green   = "\033[32m";
	string_t yellow  = "\033[33m";
	string_t blue    = "\033[34m";
	string_t magenta = "\033[35m";
	string_t cyan    = "\033[36m";
	string_t white   = "\033[37m";

	// ✨ 8 Colores Brillantes
	string_t bblack   = "\033[1;30m";
	string_t bred     = "\033[1;31m";
	string_t bgreen   = "\033[1;32m";
	string_t byellow  = "\033[1;33m";
	string_t bblue    = "\033[1;34m";
	string_t bmagenta = "\033[1;35m";
	string_t bcyan    = "\033[1;36m";
	string_t bwhite   = "\033[1;37m";

	// Estilos!!
	string_t bold       = "\033[1m";  // Negrita
	string_t dim        = "\033[2m";  // Atenuado
	string_t italic     = "\033[3m";  // Cursiva (No siempre funciona)
	string_t underline  = "\033[4m";  // Subrayado
	string_t blink      = "\033[5m";  // Parpadeo
	string_t reverse    = "\033[7m";  // Invertido
	string_t hidden     = "\033[8m";  // Oculto

	// 🎨 8 Colores de Fondo
	string_t bg_black   = "\033[40m";
	string_t bg_red     = "\033[41m";
	string_t bg_green   = "\033[42m";
	string_t bg_yellow  = "\033[43m";
	string_t bg_blue    = "\033[44m";
	string_t bg_magenta = "\033[45m";
	string_t bg_cyan    = "\033[46m";
	string_t bg_white   = "\033[47m";

	// ✨ 8 Fondos Brillantes
	string_t bbg_black   = "\033[100m";
	string_t bbg_red     = "\033[101m";
	string_t bbg_green   = "\033[102m";
	string_t bbg_yellow  = "\033[103m";
	string_t bbg_blue    = "\033[104m";
	string_t bbg_magenta = "\033[105m";
	string_t bbg_cyan    = "\033[106m";
	string_t bbg_white   = "\033[107m";
}

void printCute(string_t message, string_t color)
{
	std::cout << color << message << Color::reset;
}

std::string toString(size_t num)
{
	std::ostringstream oss;
	oss << num;
	return oss.str();
}
