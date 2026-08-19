#include <stdio.h>

void multi(int ival1, int ival2){
	printf("%d * %d = %d\n", ival1,ival2, ival1*ival2);
}

int main(void)
{
	int val1=0,val2=0;
	printf("Bitte zwei ganze Zahlen eingeben: ");
	if(scanf("%d %d", &val1,&val2) != 2){
		printf("Fehler bei der einfabe!\n");
		return 1;
	}
	multi(val1,val2);
	return 0;


    
}

