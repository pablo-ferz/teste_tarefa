all: programa

programa: main.c
	gcc -o programa main.c

clean:
	rm -f programa
