AR=ar
FLAG= -Wall -g
GC=GCC
all: libmyMath.so libmyMath.a mains maind
mains: main.o libmyMath.a
	$(GC) $(FLAG) -o mains main.o libmyMath.a 
maind: main.o libmyMath.so
	$(GC) $(FLAG) -o maind main.o ./libmyMath.so
libmyMath.so: power.o basicMath.o
	$(GC) -shared -o libmyMath.so power.o basicMath.o
libmyMath.a: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o
power.o: power.c myMath.h
	$(GC) $(FLAG) -c power.c myMath.h
basicMath.o: basicMath.c myMath.h
	$(GC) $(FLAG) -c basicMath.c myMath.h
main.o: main.c myMath.h
	$(GC) $(FLAG) -c main.c 	

.PHONY: clean all 

clean:
	rm -f *.o *.a *.so *.gch mains maind 
