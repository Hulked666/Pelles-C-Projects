#include <stdio.h>
#include <assert.h>  // for static_assert
#include <limits.h>  // for integer limits


int main(void)
{
	int iVar = 0, iVar1 = 0;
	printf("Bitte zwei Ganzzahlen angeben: ");
	int check = scanf("%d %d", &iVar,&iVar1); //scannt einen int wert
	if(check != 2){
		printf("Fehler bei der Eingabe\n");
		return 1;
	}
	printf("%d Wert(e) eingelesen: ", check);
	printf("Der eingegebene Werte lauten: %d und %d\n", iVar, iVar1);
	printf("Die Speicheradresse lautet : %p und %p\n", &iVar, &iVar1);
	return 0; 
}

