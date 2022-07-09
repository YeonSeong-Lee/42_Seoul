# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 16:31:49 by seongyle          #+#    #+#              #
#    Updated: 2022/07/10 00:47:34 by seongyle         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME = libgnl.a

CC	=	cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAG = rcsu

SRCS = get_next_line.c \
		get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAG) $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: 
	make fclean
	make all

.PHONY = all clean fclean re
