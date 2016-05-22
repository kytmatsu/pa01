# An Extremely basic Makefile that I made based off of the professors Makefile
# kytmatsu
# Kyle Matsumoto
CC = gcc
CFLAGS = -g -std=c99


graph01:	graph01.o intList.o
		${CC} -o graph01 ${CFLAGS} graph01.o intList.o

graph01.o:	graph01.c intList.h
		${CC} -c ${CFLAGS} graph01.c

intList.o:	intList.c intList.h
		${CC} -c ${CFLAGS} intList.c
