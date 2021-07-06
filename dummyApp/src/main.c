#include "dummyLib/foo.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
#ifdef NDEBUG
	printf("Hello from dummyApp.\n");
#else
	printf("Hello from dummyApp (Debug).\n");
#endif

	hello_foo();
	return 0;
}
