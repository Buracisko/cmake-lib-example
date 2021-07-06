#include "dummyLib/foo.h"
#include <stdio.h>

void hello_foo()
{
#ifdef NDEBUG
	printf("Hello from foo library.\n");
#else
	printf("Hello from foo library. (Debug)\n");
#endif
	
}
