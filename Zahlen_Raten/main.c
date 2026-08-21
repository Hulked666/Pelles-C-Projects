#include <stdio.h>

int main(void)
{
	int zahl1 = 0;
	int zahl2 = 66;
	int counter = 1;
	printf("Geben die eine Zahl 1-100 ein: ");
	int check = scanf("%d" , &zahl1);
	if(check != 1){
		printf("Fahlshe eingabe");
		return 1;
	}

	while (zahl1 != zahl2){
		if (zahl1 < zahl2){
			printf("Die Zahl %d ist kleiner als die gesuchte Zahl! Versuchen sie es noch mal\n", zahl1);
			scanf("%d", &zahl1);
		}
		else if (zahl1 > zahl2){
				printf("Die Zahlt %d ist groesser als die gesuchte Zahl! Versuchen Sie es noch mal\n", zahl1);
				scanf("%d", &zahl1);
			}
		counter = counter + 1;
		}
	printf("Sie haben die richtige Zahl %d geraten aus dem %d. Versuch\n", zahl1, counter);
	return 0;
	
}

