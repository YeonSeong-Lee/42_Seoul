# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seongyle <seongyle@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 14:44:18 by seongyle          #+#    #+#              #
#    Updated: 2022/05/13 20:51:04 by seongyle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAG = rscu

NAME = libft.a

SRC =  ft_bzero.c \
	  ft_memset.c\
	  ft_calloc.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlcpy.c\
	  ft_strlen.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_split.c\
	  ft_strnstr.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strlcat.c\
	  ft_strdup.c\
	  ft_strtrim.c\
	  ft_itoa.c\
	  ft_strmapi.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_striteri.c\

BONUS_SRC =  ft_lstnew.c\
	  ft_lstadd_front.c\
	  ft_lstsize.c\
	  ft_lstlast.c\
	  ft_lstadd_back.c\
	  ft_lstclear.c\
	  ft_lstmap.c\
	  ft_lstdelone.c\
	  ft_lstiter.c\


OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

.PHONY = all clean bonus fclean re

ifeq	($(MAKECMDGOALS), bonus)
$(NAME) : $(OBJ) $(BONUS_OBJ)
	$(AR) $(ARFLAG) $@ $^
else
$(NAME) : $(OBJ) 
	$(AR) $(ARFLAG) $@ $^
endif

all: $(NAME)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

bonus: $(NAME)

fclean: clean
	rm -f $(NAME)

re: 
	make fclean
	make all
