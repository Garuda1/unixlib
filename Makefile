##
## Makefile
##
## Licensed under GNU GPL v3
## Contributors:
## - Garuda1
##

# Be careful with that one
RM = rm -f

# Compiler flags
CFLAGS += -Wall \
					-Wextra \
					-Werror \
					-pedantic \
					-std=gnu89 \
					-nostdlib \
					-fno-builtin \
					-I. \
					-O2 \
					-g3

# The directory which contains the source files
SRC_DIR = source

# Actual source files
SRCS = $(SRC_DIR)/my_putc.c \
			 $(SRC_DIR)/my_puts.c \
			 $(SRC_DIR)/my_strlen.c\
			 $(SRC_DIR)/my_errc.c \
			 $(SRC_DIR)/my_errs.c \
			 $(SRC_DIR)/my_atoi.c

OBJS = $(SRCS:.c=.o)
NAME = unixlib

all : $(OBJS)
			ar rcs $(NAME).a $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME).a

re : fclean all

.PHONY : all clean fclean re
