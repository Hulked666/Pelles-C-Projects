#include <stdio.h>

int main(void)
{
    const double pi = 3.14159;
	int r = 0.0;

	printf ("Bitte nummer eingeben: ");
	int check = scanf("%d", &r);// scannt die eingabe und wies es der Variable r zu!
	if (check != 1) {// chech ob die Variable mehr als einen Wert hat
		printf("Fehler beim einlesen...\n");
		return 1;
	}

	double aKreis = r * r * pi;
	printf("Kreisflaeche betraegt: %d\n", (int)aKreis);//(int) wandelt das aKreis von double in int um!
	return 0; 
}

