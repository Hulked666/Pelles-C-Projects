#include <stdio.h>
#include <stdlib.h>

int* func(void){
	// muss static sein sonst gehen die werde verloren
	static int puffer[5];
	for(int i = 0; i < 5; i++){
		printf(" Wert %d eingeben: ", i + 1);
		if(scanf("%d", &puffer[i]) != 1){
			printf("Falsche Eingabe!");
			return 0;
		}
	}
	return puffer;
}

int main(void)
{
   int* iptr = func();
		printf("Folgende werte wurden eingelesen: \n");
		for( int i = 0; i < 5; i++){
			printf("Wert %d hat den Wert: %d \n", i+1, *(iptr + i));
		}
	return 0;
 
 
}

