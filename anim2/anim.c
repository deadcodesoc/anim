#include <stdlib.h>
#include "anim.h"

int
main(int argc, char *argv[])
{
	int size = screen_size();
	useconds_t delay = 250000;
	if (argc > 1)
		delay = atoi(argv[1]);
	for (;;)
		anim(size, delay);
	return 0;
}
