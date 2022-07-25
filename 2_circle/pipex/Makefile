NAME = pipex

LIB_DIR = ./lib/
LIBFT = libft/libft.a

CC = cc
CFLAGS= -Wall -Wextra -Werror

RM = rm -f
SRC = ./src/main.c \
	  
	
OBJ=$(SRC:.c=.o)

$(NAME) : $(OBJ)
	make bonus -j 6 -C $(LIB_DIR)/libft
	$(CC) $(LIB_DIR)/$(LIBFT) $(OBJ) -o $(NAME)
	make -j 6 fclean -C $(LIB_DIR)/libft

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : 
	make fclean
	make all

.PHONY : all clean fclean re
