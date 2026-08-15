#include <stdio.h>

int main(void)
{
	int zahl1 = 0;
	int zahl2 = 66;
	int counter = 1;
	printf("Geben die eine Zahl 1-100 ein: ");
	int zahl3 = scanf("%d" , &zahl1);
	if(zahl3 != 1){
		printf("Fahlshe eingabe");
		return 1;
	}

	while (zahl1 != zahl2){
		printf("Zahl nicht richtig versuchen sie es noch mal: ");
		scanf("%d", &zahl1);
		counter = counter + 1;
		}
	printf("Sie haben die richtige Nummer %d geraten mit den %d. Versuch\n", zahl1, counter);
	return 0;
	
}

