#include "libanim.h"

void emit(char ch, int n) {
	for (int i=0; i < n; i++)
		putchar(ch);
	putchar('\r');
	fflush(stdout);
}

void toggle(char ch1, char ch2, int n, useconds_t delay) {
	emit(ch1, n);
	usleep(delay/2);
	emit(ch2, n);
	usleep(delay/2);
}
