#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void)

{
    int darray[MAX];
	for(int i = 0; i < MAX; i++){
		printf("%d. Zahl:", i+1);
		if(scanf("%d", &darray[i]) != 1) {
			printf("Faclshe eingabe...\n");
			return 1;
		}
	}
	printf("Sie haben folgende Zahlen eingegeben:\n"); 
	for(int i = 0; i < MAX ; i++){
		printf("%d, ", darray[i]);
	}
	printf("\n");
	return 0;
 
		
		
	
}

