##
## EPITECH PROJECT, 2021
## json
## File description:
## Makefile
##

CFLAGS 		= -Llib -lmy

CFLAGS 		+= -W -Wall -Wextra

# CFLAGS 		+= -g -g3

CC		= gcc

SRC		= $(wildcard src/*.c)
SRC		+= $(wildcard main.c)

LIBSRC	= $(wildcard lib/*.c)

OBJ		= $(SRC:.c=.o)

LIBOBJ 	= $(LIBSRC:.c=.o)

OUT		= json

LIB		= lib/libmy.a

all: $(OUT)

$(OUT): $(LIB) $(OBJ)
	$(CC) -o $@ $(OBJ) $(CFLAGS)

$(LIB): $(LIBOBJ)
	$(AR) rsc $@ $(LIBOBJ)

clean:
	$(RM) $(LIBOBJ)
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(LIB)
	$(RM) $(OUT)

re: fclean all
