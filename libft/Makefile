# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 08:10:10 by htekeste          #+#    #+#              #
#    Updated: 2022/12/26 08:10:10 by htekeste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_putchar_fd.c ft_putstr_fd.c ft_itoa.c ft_putnbr_fd.c
OBJS			= $(SRCS:.c=.o)

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus