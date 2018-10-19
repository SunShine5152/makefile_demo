VERSION = 1.0.0     #程序版本号  

SOURCE = $(wildcard ./src/*.c)  #获取所有的.c文件  
OBJ = $(patsubst %.c, %.o, $(SOURCE))   #将.c文件转为.o文件  
INCLUDES = -I./h    #头文件路径  

LIBS = -ldylib
LIB_PATH = -L./lib

DEBUG = -D_MACRO
CFLAGS = -Wall -c

TARGET = app
CC = gcc

$(TARGET): $(OBJ)
	@mkdir -p output/
	$(CC) $(OBJ) $(LIB_PATH) $(LIBS) -o output/$(TARGET).$(VERSION)

%.o: %.c  
	$(CC) $(INCLUDES) $(DEBUG) $(CFLAGS) $< -o $@  

.PHONY: clean  
clean:  
	rm -rf $(OBJ) output/
