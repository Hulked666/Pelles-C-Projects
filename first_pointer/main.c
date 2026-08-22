#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pnt;
	int ival = 13;
	pnt = &ival;

	printf("Adresse von pnt: %p\n", &pnt);
	printf("zeigt auf: %p\n", pnt);
	printf("die adresse von ival: %p\n", &ival);
	return 0;
}

