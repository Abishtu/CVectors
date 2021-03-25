CC = gcc
CFLAGS = -Wall -std=gnu99

vector_demo: Vector main

Vector: Vector.c
	$(CC) $(CFLAGS)  
