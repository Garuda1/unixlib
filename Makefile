##
## Makefile
##
## Licensed under GNU GPL v3
## Contributors:
## - Garuda1 <garuda1@protonmail.com>
##

.PHONY : all clean fclean re install uninstall reinstall

PREFIX := /usr/
SRC_DIR := ./source
HDR_DIR := ./headers

# Actual source files
SRCS := $(shell find $(SRC_DIR) -name "*.c")
HDRS := $(shell find $(HDR_DIR) -name "*.h")
OBJS := $(SRCS:.c=.o)
NAME := unixlib

# GCC warnings
WARNINGS := -Wall -Werror -Wextra -pedantic -Wshadow -Wpointer-arith -Wcast-align -Wwrite-strings -Wmissing-prototypes -Wmissing-declarations -Wredundant-decls -Wnested-externs -Winline -Wno-long-long -Wuninitialized -Wstrict-prototypes

CFLAGS += -std=c11 -I$(HDR_DIR) -c -fpic -nostdlib $(WARNINGS)

all: $(OBJS)
	  cc -shared -o lib$(NAME).so $(OBJS) -s

debug: $(OBJS)
	  cc -shared -o lib$(NAME).so $(OBJS) -g

clean:
	  -@$(RM) $(OBJS)

fclean: clean
	  -@$(RM) lib$(NAME).so

re: fclean all

install:
	cp lib$(NAME).so $(PREFIX)/lib/
	cp $(HDRS) $(PREFIX)/local/include
	ldconfig

uninstall:
	-@$(RM) $(PREFIX)/lib/lib$(NAME).so
	-@$(RM) $(PREFIX)/local/include/$(NAME)*.h

reinstall: uninstall install
