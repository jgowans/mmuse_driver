.PHONY: all
all: client.out control.out

control.out: control.c mmuse.h
	gcc -Wall -g -o control.out control.c

client.out: client.c mmuse.h
	gcc -Wall -g -o client.out client.c

