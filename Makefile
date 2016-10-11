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
	  -std=gnu89 \
	  -I. \
		-g \
		-c \
		-fpic

# The directory which contains the source files
SRC_DIR = source

PREFIX = /usr

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
       $(SRC_DIR)/my_gets.c \
       $(SRC_DIR)/my_fdputc.c \
       $(SRC_DIR)/my_fdputs.c \
       $(SRC_DIR)/my_tolower.c \
       $(SRC_DIR)/my_toupper.c  \
       $(SRC_DIR)/my_openfd.c \
       $(SRC_DIR)/my_closefd.c \
       $(SRC_DIR)/my_memcpy.c \
       $(SRC_DIR)/malloc/my_free.c \
       $(SRC_DIR)/malloc/my_malloc.c \
       $(SRC_DIR)/malloc/my_calloc.c \
       $(SRC_DIR)/malloc/my_malloc_align.c \
       $(SRC_DIR)/malloc/my_malloc_findchunk.c \
       $(SRC_DIR)/malloc/my_malloc_mergechunk.c \
       $(SRC_DIR)/malloc/my_malloc_splitnextchunk.c \
       $(SRC_DIR)/malloc/my_malloc_start.c \
       $(SRC_DIR)/my_exit.c \
       $(SRC_DIR)/my_fdgetc.c \
       $(SRC_DIR)/my_fdgets.c \
       $(SRC_DIR)/my_memchr.c \
			 $(SRC_DIR)/my_putn.c \
			 $(SRC_DIR)/my_fdputn.c \
			 $(SRC_DIR)/my_errn.c \
       $(SRC_DIR)/my_rand.c \
			 $(SRC_DIR)/my_retstr.c \
       $(SRC_DIR)/linked-list/my_list_init.c \
       $(SRC_DIR)/linked-list/my_list_free.c \
       $(SRC_DIR)/linked-list/my_list_append.c \

NAME = unixlib
OBJS = $(SRCS:.c=.o)

all : $(OBJS)
	  $(CC) -shared -o lib$(NAME).so $(OBJS)

clean :
	  $(RM) $(OBJS)

fclean : clean
	  $(RM) lib$(NAME).so

re : fclean all

install :
	cp lib$(NAME).so $(PREFIX)/lib/
	cp unixlib.h $(PREFIX)/local/include
	ldconfig

PHONY : all clean fclean re
