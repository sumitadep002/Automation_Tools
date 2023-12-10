# Makefile

CC = gcc
CFLAGS = -Iinclude

SRC = src/main.c src/add.c src/substract.c src/multiply.c src/divide.c
OBJ = $(SRC:.c=.o)
EXECUTABLE = calculator

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(OBJ) $(EXECUTABLE)
