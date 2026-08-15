#include <stdio.h>

int main(void)
{
	int eingabe = 0;
	printf("Bitte ein Zahl zwischen 1- 10 eingeben: ");
	 int zahl = scanf("%d" , &eingabe);
	if( zahl != 1) {
		printf(" Ihre eingabe war Falsch!\n");
	
	return 1;
	}


	if((eingabe>0) && (eingabe <10)){
		printf(" Die Nummer %d ist zwischen 1-10\n", eingabe);
		}
	else{
		printf("Ihre angabe %d ist nicht in den vorgegebenen Bereich!\n", eingabe);
		}
	return 0;
	
}

