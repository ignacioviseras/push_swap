# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 18:42:22 by igvisera          #+#    #+#              #
#    Updated: 2024/05/29 20:57:19 by igvisera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	utils.a
CFLAGS			=	-Wall -Wextra -Werror -g3 -fsanitize=address -fPIE

PATH_BASICS 	=	./basics/
PATH_PRINTF 	=	./printf/
BASICS   	  	=	$(addprefix $(PATH_BASICS), $(BASICS_SRC))
PRINTF	     	=	$(addprefix $(PATH_PRINTF), $(PRINTF_SRC))

SRCS			=	is_digit.c \

BASICS_SRC		=	ft_atoi.c \
					ft_strlen.c \
					ft_split.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_isdigit.c \
					ft_memset.c \
					ft_strchr.c \
					ft_strjoin.c \
					ft_strlcpy.c \
					ft_substr.c \
					ft_strcmp.c \
					ft_strdup.c \

PRINTF_SRC		=	ft_printf.c \
					ft_printNumbers.c \
					ft_printText.c

OBJS			=	${BASICS:.c=.o} \
					${PRINTF:.c=.o} \
					${SRCS:.c=.o} \

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re