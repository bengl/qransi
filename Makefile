CFLAGS=-Wall
all:
	$(CC) $(CFLAGS) qransi.c -lqrencode -o qransi
