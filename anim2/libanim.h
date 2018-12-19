#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>

int screen_size(void);
void       emit(char ch, int n);
void     toggle(char ch1, char ch2, int n, useconds_t delay);
void       anim(int n, useconds_t delay);
