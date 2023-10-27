#/**
# * @file Makefile
# * @author Tucker Self, Braden Windsor
# * @date 2023-11-01
# * @brief the makefile for the Library 
# * 
# * allows for the usage of make commands for the code within the DualLibrary file
# */

#Compile using g++
CC = g++
#Compile with all errors and warnings
CFLAGS = -g -Wall -Wextra
#The build target
TARGET = DualLibrary

#Compilation commands
all: $(TARGET)

$(TARGET): library.o main.o
	$(CC) $(CFLAGS) -o $(TARGET) library.o main.o

library.o: library.cpp library.h book.h
	$(CC) $(CFLAGS) -c library.cpp

main.o: main.cpp library.h
	$(CC) $(CFLAGS) -c main.cpp

#Clean up files
clean:
	$(RM) $(TARGET) *.o *~
