##
## Makefile
##
## Licensed under GNU GPL v3
## Contributors:
## - Garuda1 <garuda1@protonmail.com>
##

# Be careful with that one
RM = rm -f

# Compiler flags
CFLAGS += -Wall \
	  -Wextra \
	  -Werror \
	  -pedantic \
	  -std=gnu89 \
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
       $(SRC_DIR)/my_atoi.c \
       $(SRC_DIR)/my_islower.c \
       $(SRC_DIR)/my_isupper.c \
       $(SRC_DIR)/my_isdigit.c \
       $(SRC_DIR)/my_isspace.c \
       $(SRC_DIR)/my_getc.c \
       $(SRC_DIR)/my_fdputc.c \
       $(SRC_DIR)/my_fdputs.c \
       $(SRC_DIR)/my_tolower.c \
       $(SRC_DIR)/my_toupper.c  \
       $(SRC_DIR)/my_openfd.c \
       $(SRC_DIR)/my_closefd.c \
       $(SRC_DIR)/my_memcpy.c \
       $(SRC_DIR)/malloc/my_free.c \
       $(SRC_DIR)/malloc/my_malloc.c \
       $(SRC_DIR)/malloc/my_malloc_align.c \
       $(SRC_DIR)/malloc/my_malloc_findchunk.c \
       $(SRC_DIR)/malloc/my_malloc_mergechunk.c \
       $(SRC_DIR)/malloc/my_malloc_splitnextchunk.c \
       $(SRC_DIR)/malloc/my_malloc_start.c \
       $(SRC_DIR)/my_exit.c \
       $(SRC_DIR)/my_fdgetc.c

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
