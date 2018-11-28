
NAME := test_pilha_din

CC := gcc 
CF := -Wall

all:
	$(CC) $(CF) *.c -I*.h -o $(NAME)

run:
	./$(NAME)