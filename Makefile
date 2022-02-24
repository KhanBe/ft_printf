# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 21:23:27 by jaewoo            #+#    #+#              #
#    Updated: 2022/02/24 22:42:59 by jaewoo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_PATH = ./libft
LIBFT = ./libft/libft.a
LIBFTPRINTF = ${PATH}/ft_printf.h

AR = ar
ARFLAGS = crv
CC = gcc
FLAGS = -Wall -Werror -Wextra

INCLUDE = -I ${LIBFT_PATH}

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
	make clean -C libft
	rm -f $(OBJS)

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	$(AR) $(ARFLAGS) $@ $^

$(LIBFT) :
	make bonus -C libft
	cp $(LIBFT) $(NAME)

.c.o :
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) $(INCLUDE)

re : fclean all

.PHONY : all clean fclean re
