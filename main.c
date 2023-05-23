#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int main(int argc, char *argv[]) {
	int a = atoi(argv[1]);
    int b = atoi(argv[2]);
	printf("(initial) a=%d, b=%d\n", a, b);

	swap(&a, &b);
	printf("(swapped) a=%d, b=%d\n", a, b);

	printf("(added) a + b = %d + %d = %d\n", a, b, add(a, b));
	printf("(subtracted) a - b = %d - %d = %d\n", a, b, subtract(a, b));

	return 0;
}
