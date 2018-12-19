all: libanim.a anim.o blink.o spin.o

libanim.a: libanim.o libanimutil.o
	ar -q -c libanim.a libanim*.o

clean:
	rm -f *~ *.o libanim.a anim

.PHONY: clean

