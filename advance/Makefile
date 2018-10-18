VERSION = 1.0.0

SOURCE = $(wildcard ./src/*.c)
OBJ = $(patsbust %.c, %.o. $(SOURCE))

LIBS = -1dylib
LIB_PATH = -L./lib

DEBUG = -D_MACRO
CFLAGS = -Wall -c

TARGET = app
CC = gcc

$(TARGET): $(OBJ)
	@mkdir -p output/
	$(CC) $(OBJ) $(LIB_PATH) $(LIBS) -o output/$(TARGET).$(VERSION)

%.o: %.c
	$(CC) $(OBJ) $(LIB_PATH) $(LIBS) -o output/$(TARGET).$(VERSION)

.PHONY: clean
	rm -rf $(OBJ) output/
