all: sillyCrypto

sillyCrypto: sillycrypto.c
	$(CC) sillycrypto.c -o sillycrypto
