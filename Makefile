CC=gcc

all:
	@$(CC) triangle.c -o "triangle" -O2
	@$(CC) formatted.c -o "formatted_triangle" -O2