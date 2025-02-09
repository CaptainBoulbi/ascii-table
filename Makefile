all:
	gcc -Wall -Wextra main.c -o ascii-table

run: all
	./ascii-table

fast:
	gcc -Wall -Wextra fast-ascii-table.c -o fast-ascii-table
