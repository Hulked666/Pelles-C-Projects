#include <stdio.h>

int main(void)
{
	int eingabe = 0;
	printf("Bitte eine Zahl zwischen 1-100 ein: ");
	 int zahl = scanf("%d", &eingabe);
	if (zahl != 1) {
		printf("Falsche Eingabe...\n");
		return 1;
	}

	if((eingabe % 2 == 0) && (eingabe <= 100)) {
		printf("Die Zahl %d ist gerade\n", eingabe);
	}
	else{
		printf("Die Zahl %d ist ungerade\n", eingabe);
	}
	return 0;
 
}

