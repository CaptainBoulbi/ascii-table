all:
	gcc -Wall -Wextra main.c -o ascii-table

run: all
	./ascii-table
