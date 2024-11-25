prodcons: prodcons.o main.o monitor_hoare.o
	gcc -o prodcons prodcons.o main.o monitor_hoare.o

prodcons.o: prodcons.c prodcons.h
	gcc -c -o prodcons.o prodcons.c

monitor_hoare.o: monitor_hoare.c monitor_hoare.h
	gcc -c -o monitor_hoare.o monitor_hoare.c

main.o: main.c prodcons.h
	gcc -c -o main.o main.c

clean:
	rm -f prodcons
	rm -f *.o
