
CC := g++
SRC_DIR := src
TARGET := bin/app

SORUCES := $(shell find $(SRC_DIR) -type f \( -name *.c -o -name*.cpp \))
LIB := OPTIONS=-lglfw -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo -std=c++11
INCLUDE := -Iinclude/

$(TARGET) : $(SOURCES)
	$(CC) -o $(TARGET) $(SOURCES) $(LIB) $(INCLDUE)

run : $(TARGET)
	TARGET

clean :
	rm $(TARGET)

