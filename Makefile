# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 18:40:55 by igvisera          #+#    #+#              #
#    Updated: 2024/05/19 17:04:21 by igvisera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
# CFLAGS		=	-Wall -Wextra -Werror -fsanitize=address -fPIE
CFLAGS		=	-Wall -Wextra -fsanitize=address -fPIE


UTILS_A		=	utils.a
UTILS_SRC 	=	./utils/
UTILS_OBJS	=	$(addprefix $(UTILS_SRC), *.o)
UTILS     	=	$(addprefix $(UTILS_SRC), $(UTILS_A))

SRCS		=	push_swap.c \
				# push_swap_utils.c \


OBJS		=	${SRCS:.c=.o} \
					

all: $(NAME)

$(NAME): $(UTILS) $(OBJS)
	gcc $(CFLAGS) $(OBJS) -I ./push_swap.h $(UTILS) -o $(NAME)

$(UTILS):
	$(MAKE) -C $(UTILS_SRC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re