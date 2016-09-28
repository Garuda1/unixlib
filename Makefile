##
## Makefile
##
## Licensed under GNU GPL v3
## Contributors:
## - Garuda1
##

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
SRCS = $(SRC_DIR)/putc.c \
			 $(SRC_DIR)/puts.c

OBJS = $(SRCS:.c=.o)
NAME = unixlib

all : $(OBJS)
			ar rcs $(NAME).a $(OBJS)

clean :
	$(RM) -f $(OBJS) $(NAME).a

re : clean all

.PHONY : all clean re
