#include <stdio.h>

int main(void)
{
	int iVal = 0;
	printf("Bitte eine Ganzzahl eingeben: ");
	int check = scanf("%d", &iVal);
	if(check == 1){
		printf("Ihre Eingabe: %d\n" , iVal);
	}else{
		printf("Fehler bei der Eingabe!\n");
	}
	printf("Ausserhalb der if-Anweisung\n");
	//return 0;


	int ival1 = 0, ival2 = 0;
	printf("Bitte zwei Ganzzahlen eingeben: ");
	int wert = scanf("%d %d", &ival1, &ival2);
	if(wert != 2){
		printf("Eingabe nicht gültig!\n");
		return 1;
	}
	const int max = (ival1 > ival2) ? ival1 :ival2;
	printf("Der groessere Wert ist: %d\n", max);
	return 0;

}

