#info : 
#$@ = nom de la cible
#$< = nom de la 1er dependeance
#$^ = liste des dependances
#$? = liste des dependances pour recentes que la cible

EXEC =prog

SRC = tools/putchar.c tools/putstr.c tools/putnb.c tools/atoi.C

OBJ = $(SRC:.c=.o)

INC = include/tools.h

FLAG = -Wall -Wextra -Werror

CC = gcc

CFLAG = $(CC) $(FLAG)

all :
	$(EXEC)

$(EXEC):
	$(CFLAG) -o $@ $(INC) $(SRC)

clean:
	rm $(NAME)

rclean: clean
	rm *.~
