#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>

int screen_size()
{
	struct winsize ws;
	ioctl(STDIN_FILENO, TIOCGWINSZ, &ws);
	int size = ws.ws_col*ws.ws_row;
	return size;
}

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

void blink(int n, useconds_t delay) {
	toggle('+', 'X', n, delay);
}

void spin(int n, useconds_t delay) {
	toggle('|', '/', n, delay/2);
	toggle('-', '\\', n, delay/2);
}

int
main(int argc, char *argv[])
{
	int size = screen_size();
	useconds_t delay = 250000;
	if (argc > 1)
		delay = atoi(argv[1]);
	for (;;)
		spin(size, delay);
	return 0;
}
