#include <stdio.h>
#include <math.h>

int main(void)
{
    long double dVar= 0.0;
	printf("Bitte ein Zahl eingeben:");
	int check = scanf("%Lf", &dVar);
	if(check != 1) {
		printf("Die eingabe ist Falsch...\n");
		return 1;
		}
	printf("Die Quadratwurzel der %Lf ist die %Lf\n", dVar, sqrtl(dVar));
}

