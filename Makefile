# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 21:23:27 by jaewoo            #+#    #+#              #
#    Updated: 2022/02/23 23:30:47 by jaewoo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

PATH = ./header
LIBFT = ./libft/libft.a
LIBFTPRINTF = ${PATH}/ft_printf.h

AR = ar
ARFLAGS = crv
CC = gcc
FLAGS = -Wall -Werror -Wextra

INCLUDE = -I ${PATH}

SRCS_PATH = ./printf

SRCS = ${SRCS_PATH}/ft_printf.c \
       ${SRCS_PATH}/ft_c.c \
       ${SRCS_PATH}/ft_check_arg.c \
       ${SRCS_PATH}/ft_d_i.c \
       ${SRCS_PATH}/ft_decimal_length.c \
       ${SRCS_PATH}/ft_decimal_to_hex.c \
       ${SRCS_PATH}/ft_free.c \
       ${SRCS_PATH}/ft_hex_length.c \
       ${SRCS_PATH}/ft_p.c \
       ${SRCS_PATH}/ft_percent.c \
       ${SRCS_PATH}/ft_reversed_string_print.c \
       ${SRCS_PATH}/ft_s.c \
       ${SRCS_PATH}/ft_u.c \
       ${SRCS_PATH}/ft_x.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.c.o :
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

re : fclean all

.PHONY : all clean fclean re
