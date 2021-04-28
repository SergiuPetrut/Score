OBJS	= eval.o classify.o getscore.o output.o score.o
SOURCE	= eval.c classify.c getscore.c output.c score.c
HEADER	= score.h
OUT	= score.a
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

eval.o: eval.c
	$(CC) $(FLAGS) eval.c 

classify.o: classify.c
	$(CC) $(FLAGS) classify.c 

getscore.o: getscore.c
	$(CC) $(FLAGS) getscore.c 

output.o: output.c
	$(CC) $(FLAGS) output.c 

score.o: score.c
	$(CC) $(FLAGS) score.c 


clean:
	rm -f $(OBJS) $(OUT)
