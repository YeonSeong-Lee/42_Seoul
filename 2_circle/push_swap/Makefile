# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 20:38:35 by seongyle          #+#    #+#              #
#    Updated: 2022/06/14 21:02:49 by seongyle         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

LIB_DIR = ./lib
LIBFT = libft.a

CC	=	cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rscu

SRCS = srcs/main.c \
		srcs/args/arg_indexer.c srcs/args/arg_parser.c srcs/args/arg_validator.c\
		srcs/arrange/arrange_big_args.c srcs/arrange/arrange_stack.c\
		srcs/arrange/arrange_under_5_args.c srcs/arrange/arrange_under_5_args_utils.c\
		srcs/cmds/cmd_push.c srcs/cmds/cmd_reverse_rotate.c srcs/cmds/cmd_rotate.c\
		srcs/cmds/cmd_swap.c\
		srcs/stacks/stack_handler.c srcs/stacks/stack_utils.c\
		srcs/error_handler.c

		
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	make -C $(LIB_DIR)
	cp $(LIB_DIR)/$(LIBFT) $(NAME)
	make fclean -C $(LIB_DIR)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(NAME) -o push_swap

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean : clean
	make -C $(LIB_DIR) fclean
	rm -rf $(NAME)

re: 
	make fclean
	make all

.PHONY = all clean fclean re
