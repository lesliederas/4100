CC = gcc
CFLAGS = -Wall -Werror -g
TARGET_LIB = libimul_idiv.a
TARGET_TEST = test

all: $(TARGET_LIB) $(TARGET_TEST)

$(TARGET_LIB): imul_idiv.o
	ar rcs $(TARGET_LIB) imul_idiv.o

imul_idiv.o: imul_idiv.c imul_idiv.h
	$(CC) $(CFLAGS) -c imul_idiv.c

$(TARGET_TEST): main.o imul_idiv.o
	$(CC) $(CFLAGS) -o $(TARGET_TEST) main.o imul_idiv.o

main.o: main.c imul_idiv.h
	$(CC) $(CFLAGS) -c main.c
clean:
	rm -f *.o $(TARGET_LIB) $(TARGET_TEST)

.PHONY: all clean
