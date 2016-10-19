##
## Makefile
##
## Licensed under GNU GPL v3
## Contributors:
## - Garuda1 <garuda1@protonmail.com>
##

# Be careful with that one
RM = rm -f

PREFIX = /usr/
SRC_DIR = ./source
HEADERS_DIR = ./headers

HEADERS = $(HEADERS_DIR)/unixlib.h \
          $(HEADERS_DIR)/unixlib-io.h \
					$(HEADERS_DIR)/unixlib-string.h

# Actual source files
SRCS = $(SRC_DIR)/my_atoi.c \
       $(SRC_DIR)/my_exit.c \
			 $(SRC_DIR)/my_rand.c \
			 $(SRC_DIR)/my_retstr.c \
			 $(SRC_DIR)/string/my_isdigit.c \
			 $(SRC_DIR)/string/my_islower.c \
			 $(SRC_DIR)/string/my_isspace.c \
			 $(SRC_DIR)/string/my_isupper.c \
			 $(SRC_DIR)/string/my_memchr.c \
			 $(SRC_DIR)/string/my_memcpy.c \
			 $(SRC_DIR)/string/my_memset.c \
			 $(SRC_DIR)/string/my_strcat.c \
			 $(SRC_DIR)/string/my_strcmp.c \
			 $(SRC_DIR)/string/my_strcpy.c \
			 $(SRC_DIR)/string/my_strlen.c \
			 $(SRC_DIR)/string/my_strncpy.c \
			 $(SRC_DIR)/string/my_tolower.c \
			 $(SRC_DIR)/string/my_toupper.c \
			 $(SRC_DIR)/malloc/my_calloc.c \
			 $(SRC_DIR)/malloc/my_free.c \
			 $(SRC_DIR)/malloc/my_malloc_align.c \
			 $(SRC_DIR)/malloc/my_malloc_findchunk.c \
			 $(SRC_DIR)/malloc/my_malloc_mergechunk.c \
			 $(SRC_DIR)/malloc/my_malloc_splitnextchunk.c \
			 $(SRC_DIR)/malloc/my_malloc_start.c \
			 $(SRC_DIR)/malloc/my_malloc.c \
			 $(SRC_DIR)/linked-list/my_list_append.c \
			 $(SRC_DIR)/linked-list/my_list_free.c \
			 $(SRC_DIR)/linked-list/my_list_init.c \
			 $(SRC_DIR)/io/my_closefd.c \
			 $(SRC_DIR)/io/my_errc.c \
			 $(SRC_DIR)/io/my_errn.c \
			 $(SRC_DIR)/io/my_errs.c \
			 $(SRC_DIR)/io/my_fdgetc.c \
			 $(SRC_DIR)/io/my_fdgets.c \
			 $(SRC_DIR)/io/my_fdputc.c \
			 $(SRC_DIR)/io/my_fdputn.c \
			 $(SRC_DIR)/io/my_fdputs.c \
			 $(SRC_DIR)/io/my_getc.c \
			 $(SRC_DIR)/io/my_gets.c \
			 $(SRC_DIR)/io/my_openfd.c \
			 $(SRC_DIR)/io/my_putc.c \
			 $(SRC_DIR)/io/my_putn.c \
			 $(SRC_DIR)/io/my_puts.c

NAME = unixlib
OBJS = $(SRCS:.c=.o)
CFLAGS += -Wall \
	  -Wextra \
	  -Werror \
	  -std=gnu89 \
	  -I$(HEADERS_DIR) \
	  -c \
	  -fpic

all : $(OBJS)
	  $(CC) -shared -o lib$(NAME).so $(OBJS) -s

debug : $(OBJS)
	  $(CC) -shared -o lib$(NAME).so $(OBJS) -g

clean :
	  $(RM) $(OBJS)

fclean : clean
	  $(RM) lib$(NAME).so

re : fclean all

install :
	cp lib$(NAME).so $(PREFIX)/lib/
	cp $(HEADERS) $(PREFIX)/local/include
	ldconfig

PHONY : all clean fclean re install
