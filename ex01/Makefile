# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 01:23:11 by shurtado          #+#    #+#              #
#    Updated: 2025/02/19 16:37:56 by shurtado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Traps
CC			=	c++
CPPFLAGS	=	-g -Wall -Werror -Wextra -std=c++98 -MMD -MP
LDFLAGS		=	-L$(CUTE_DIR) -lcute
INCLUDES	=	-I$(CUTE_DIR)/inc

CUTE_DIR	=	lib/cute
CUTE		=	$(CUTE_DIR)/libcute.a

CLASSES		=	ClapTrap ScavTrap

SRC			=	$(addprefix src/, $(foreach class, $(CLASSES), $(class)/$(class).cpp) main.cpp)

OBJS		=	$(SRC:%.cpp=obj/%.o)
DEPS		=	$(OBJS:.o=.d)

all: $(CUTE) $(NAME)

$(CUTE):
	@if [ ! -d "$(CUTE_DIR)/.git" ]; then \
		echo "Submódulo no encontrado. Descargando..."; \
		git submodule update --init --recursive; \
	fi
	$(MAKE) -C $(CUTE_DIR)

$(NAME): $(OBJS) $(CUTE)
	$(CC) $(INCLUDES) $(CPPFLAGS) -o $@ $^ $(LDFLAGS)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(INCLUDES) $(CPPFLAGS) -c $< -o $@


clean:
	rm -rf obj
	@$(MAKE) clean -C $(CUTE_DIR)


fclean: clean
	rm -f $(NAME)
	@$(MAKE) fclean -C $(CUTE_DIR)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re submodule
