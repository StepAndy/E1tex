compiler=gcc
key[1]=-o
key[2]=-c
all:reverse_func
	$(compiler) task.o reverse_func.o $(key[1]) task

reverse_func:
	$(compiler) $(key[2]) reverse_func.c task.c
