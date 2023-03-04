# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 12:49:07 by htekeste          #+#    #+#              #
#    Updated: 2023/03/04 16:34:17 by htekeste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a

NAME = libftprintf.a

SRCS =  srcs/ft_print_hex.c srcs/ft_print_percent.c srcs/ft_print_num.c srcs/ft_print_str.c srcs/ft_print_unsigned_decimal.c srcs/ft_print_char.c ft_printf.c srcs/ft_print_ptr.c
		
CC = cc

CFLAGS = -c -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft 
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
