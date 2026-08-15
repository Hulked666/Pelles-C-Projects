#include <stdio.h>

int main(void)
{
   
   int ival = 0;
	printf("Bitte eine Ganze Zahl zwischen 1-4 eingeben: ");
	int check = scanf("%d", &ival);
	 if (check != 1){
		printf("Die eingabe war Falsch...\n");
		return 1;
	}
	switch(ival) {
		case 1: printf("Sie haben einen Auto gewonnen\n");
				break;
		case 2: printf("Sie haben 50 Euro gewonnen\n");
				break;
		case 3: printf("Sie haben nichts gewonnen\n");
				break;
		case 4: printf("Sie haben ein Haus gewonnen \n");
				break;
		default: printf("%d? Unbekannte Zahl\n", ival);
	}
	return 0;
 


}

