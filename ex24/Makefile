# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/15 15:31:57 by vlacombe          #+#    #+#              #
#    Updated: 2019/11/21 15:25:05 by vlacombe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			srcs/ft_strlen.c srcs/ft_swap.c

OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDES = includes/

all: $(NAME) 

$(NAME):                                                                        
		gcc -Wall -Werror -Wextra -c ./srcs/ft_*.c -I $(INCLUDES)
		ar rc $(NAME) $(OUT)
		ranlib $(NAME)		

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
