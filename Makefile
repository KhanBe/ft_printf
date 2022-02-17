# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 21:23:27 by jaewoo            #+#    #+#              #
#    Updated: 2022/02/17 22:07:56 by jaewoo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

PATH = ./header
LIBFT = ./libft/libft.a
LIBFTPRINTF = ${PATH}/ft_printf.h

CC = clang

FLAGS = -Wall -Werror -Wextra
INCLUDE = -I ${PATH}

SRCS_PATH = ./ft_printf
SRCS = ${SRCS_PATH}/ft_printf.c

OBJS = $(SRCS:.c=.o)

all: ${NAME}

