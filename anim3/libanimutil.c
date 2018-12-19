#include "libanim.h"

int screen_size()
{
        struct winsize ws;
        ioctl(STDIN_FILENO, TIOCGWINSZ, &ws);
        int size = ws.ws_col*ws.ws_row;
        return size;
}
