CC=cc
CFLAGS=-lxcb -lxcb-randr -o bai

build: bai.c
	$(CC) bai.c $(CFLAGS)
