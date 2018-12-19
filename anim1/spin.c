#include "anim.h"

void anim(int n, useconds_t delay)
{
	toggle('|', '/', n, delay/2);
	toggle('-', '\\', n, delay/2);
}
