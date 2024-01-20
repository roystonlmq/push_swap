# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roylee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 21:30:26 by roylee            #+#    #+#              #
#    Updated: 2023/09/16 17:36:22 by roylee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strnstr.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_strdup.c ft_atoi.c ft_calloc.c ft_itoa.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_nbrlen_base.c \
	ft_puthexa_u.c ft_putstr.c ft_putunbr_base.c ft_unbrlen_base.c  \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_printf.c	

OBJS	=	${SRCS:.c=.o}

CC = gcc
NAME = libft.a
CFLAGS	=	-Wall -Wextra -Werror
RM	=	@rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Linked into static lib \033[0;32mlibft\033[0m."

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< -I.

clean:
	$(RM) $(BONUS_OBJS)
	$(RM) $(OBJS)
	@echo "Removed objects"

fclean: clean
	$(RM) $(NAME)
	@echo "Removed static lib $(NAME)"

re: fclean all

.PHONY: all clean fclean re bonus
