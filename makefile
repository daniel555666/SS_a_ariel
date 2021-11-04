CC=gcc
AR=ar
FLAGS= -Wall -g
LOOP=basicClassification.o advancedClassificationLoop.o
RECURS=advancedClassificationRecursion.o basicClassification.o

all: libclassloops.a libclassrec.a libclassrec.so libclassloops.so mains maindloop maindrec

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c	
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm
maindrec: main.c libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.c ./libclassrec.so -lm	

loops: libclassloops.a
libclassloops.a: $(LOOP)
	$(AR) -rcs libclassloops.a $(LOOP)

recursives: libclassrec.a
libclassrec.a: $(RECURS)
	$(AR) -rcs libclassrec.a $(RECURS)	

recursived: libclassrec.so
libclassrec.so: $(RECURS) 
	$(CC) -shared -o libclassrec.so $(RECURS) -lm

loopd:libclassloops.so
libclassloops.so: $(LOOP)
	$(CC) -shared -o libclassloops.so $(LOOP) -lm

basicClassification.o: basicClassification.c NumClass.h 
	$(CC) $(FLAGS) -c basicClassification.c -lm
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -lm	

PHONY: all clean 
clean: 
	rm -f *.a *.o *.so mains maindloop maindrec


