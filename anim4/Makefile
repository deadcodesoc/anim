all: libanim.dylib anim.dylib spin.dylib blink.dylib anim

anim: libanim.dylib anim.dylib anim.o
	cc libanim.dylib anim.dylib anim.o -o anim

libanim.dylib: libanim.o libanimutil.o
	cc -dynamiclib -o libanim.dylib libanim*.o

anim.dylib: stub.o
	cc -dynamiclib -o anim.dylib stub.o

spin.dylib: spin.o libanim.dylib
	cc -dynamiclib -o spin.dylib libanim.dylib spin.o

blink.dylib: blink.o libanim.dylib
	cc -dynamiclib -o blink.dylib libanim.dylib blink.o

clean:
	rm -f *~ *.o *.dylib anim

.PHONY: clean

