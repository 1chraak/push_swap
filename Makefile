# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izouriqi <izouriqi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/24 12:38:54 by izouriqi          #+#    #+#              #
#    Updated: 2026/02/24 12:38:55 by izouriqi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS = checker

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c check_errors.c actions.c checks.c ft_sort.c funcs_libft.c linked_data.c postion.c

SRCB = check_errors.c actions.c actions_2.c checks.c ft_sort.c funcs_libft.c linked_data.c postion.c bonus/get_next_line.c bonus/get_next_line_utils.c bonus/checker.c

OBJS = $(SRC:.c=.o)

OBJSB = $(SRCB:.c=.o)

RM = rm -rf

all: $(NAME)

bonus: $(BONUS)

$(BONUS): $(OBJSB)
	$(CC) $(CFLAGS) $^ -o $(BONUS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: 
	$(RM) $(OBJS) $(OBJSB) $(NAME) $(BONUS)

re: fclean all

.PHONY:all bonus clean fclean re