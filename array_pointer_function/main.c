#include <stdio.h>

int main(int argc, char *argv[])
{
	int puffer[5];
	for (int i = 0; i < 5; i++){
		printf(" %d. Wert eingeben: ", i+1);
			if(scanf("%d", &puffer[i]) != 1){
				printf("Falsche Eingabe!");
				return 0;
			}
		}
	

	int *iptr = NULL;

	iptr = puffer;

	printf("puffer[0] = %d\n", *iptr);
	printf("puffer[4] = %d\n", *(iptr+4));

	for (int i = 0; i < 5; i++){
		printf(" %d. Wert ist: %d\n", i+1, *(iptr+i));
	}
	return 0;
}

