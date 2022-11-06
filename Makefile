# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 18:24:47 by zel-bouz          #+#    #+#              #
#    Updated: 2022/11/05 13:30:37 by zel-bouz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc 

FLG = -Wall -Wextra  -Werror

RM = rm -f

AR = ar rcs

FILES = ft_printf.c \
	ft_putchar_fd.c \
	ft_puthexa.c \
	ft_putnbr_fd.c \
	ft_putunbr.c \
	ft_putptr.c \
	ft_putstr_fd.c \
	ft_putunbr.c \
	ft_memcpy.c 

OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $^

%.o: %.c ft_printf.h
	$(CC) -o $@ $(FLG) -c $< 

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all