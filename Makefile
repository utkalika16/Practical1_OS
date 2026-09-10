CC = gcc
CFLAGS = -Wall -g

all: prog1 prog2 prog3 prog4 prog5 lsgrep

prog1: prog1.c
	$(CC) $(CFLAGS) -o prog1 prog1.c

prog2: prog2.c
	$(CC) $(CFLAGS) -o prog2 prog2.c

prog3: prog3.c
	$(CC) $(CFLAGS) -o prog3 prog3.c

prog4: prog4.c
	$(CC) $(CFLAGS) -o prog4 prog4.c

prog5: prog5.c
	$(CC) $(CFLAGS) -o prog5 prog5.c

lsgrep: ls_grep_pipe.c
	$(CC) $(CFLAGS) -o lsgrep ls_grep_pipe.c

clean:
	rm -f prog1 prog2 prog3 prog4 prog5 lsgrep
