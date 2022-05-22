# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 16:31:49 by seongyle          #+#    #+#              #
#    Updated: 2022/05/15 18:02:19 by seongyle         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB_DIR = ./lib
LIBFT = libft.a

CC	=	cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAG = rcsu

SRCS = ft_printf.c \
		src/ft_hextoa.c \
		src/ft_long_hextoa.c \
		src/ft_utoa.c \
		src/parse_print.c \
		src/ft_write.c
		
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	make -C $(LIB_DIR)
	cp $(LIB_DIR)/$(LIBFT) $(NAME)
	$(AR) $(ARFLAG) $(NAME) $(OBJS)

all: $(NAME)

clean:
	make -C $(LIB_DIR) clean
	rm -rf $(OBJS)

fclean : clean
	make -C $(LIB_DIR) fclean
	rm -rf $(NAME)

re: 
	make fclean
	make all

.PHONY = all clean fclean re
