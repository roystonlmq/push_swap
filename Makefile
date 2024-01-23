# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roylee <roylee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 16:22:42 by sgoffaux          #+#    #+#              #
#    Updated: 2024/01/24 00:09:16 by roylee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
LIBFT		=	libft/
LIBFT_A		=	$(addprefix $(LIBFT), libft.a)

CC			=	gcc
INCLUDE 	=	includes
CFLAGS		=	-Wall -Wextra -Werror -I$(INCLUDE) -g
RM			=	rm -f
SRCS		=	main.c srcs/check.c srcs/error.c srcs/init.c srcs/load.c \
				srcs/print.c srcs/rotate.c srcs/swap.c srcs/push.c \
				srcs/rev_rotate.c

OBJS		=	$(SRCS:%.c=%.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBFT_A)
				@$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT) -lft -o $(NAME)
				@echo "Linked into executable \033[0;32mpush_swap\033[0m."

%.o:			%.c
				@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
				@echo "Compiling $<."

$(LIBFT_A):
				@$(MAKE) -s -C $(LIBFT)
				@echo "Compiled $(LIBFT_A)."

localclean:
				@$(RM) $(OBJS)
				@echo "Removed object files."

clean:			localclean
				@$(MAKE) clean -s -C $(LIBFT)
				@echo "Clean libft."

fclean:			localclean
				@$(MAKE) fclean -s -C $(LIBFT)
				@echo "Full clean libft."
				@$(RM) $(NAME)
				@echo "Removed executable."

re:				fclean all

.PHONY:			all clean fclean re localclean bonus
