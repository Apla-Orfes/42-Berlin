# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 17:20:33 by ocharisi          #+#    #+#              #
#    Updated: 2025/06/03 18:12:45 by ocharisi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SOURCES = \
		ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c \
		ft_putnbr_unsigned.c ft_putptr.c \
		ft_putstr.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) rcs $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
