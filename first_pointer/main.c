#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pnt;
	int ival = 13, ival2;
	// zeiger erhält das wert der speicheradresse von ival
	pnt = &ival;
	// ival 2 erhällt das wert von ival durch den Zeiger
	ival2 = *pnt;

	printf("Adresse von pnt: %p\n", &pnt);
	printf("zeigt auf: %p\n", pnt);
	printf("die adresse von ival: %p\n", &ival);
	printf("*pnt hat den wert: %d \n", *pnt);
	printf("ival hat den wert: %d \n", ival);
	printf("ival2 hat den wert: %d \n", ival2);


	*pnt = 22;

	printf("Aendern wir den *pnt auf: %d , so aendert sich auch der ival: %d \n", *pnt , ival);
	// der ival2 erhält immer noch das wert von den ersten pointer und bleibt 13 !
	printf("Der ival2 bleibt: %d \n", ival2);



	return 0;
}

