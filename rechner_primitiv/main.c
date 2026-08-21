#include <stdio.h>

float multi(float val1, float val2){
	float result = val1 * val2;
	return result;
}
float dev(float val1, float val2){
	float result = val1 / val2;
	return result;
}
float add(float val1, float val2){
	float result = val1 + val2;
	return result;
}
float sub(float val1, float val2){
	float result = val1 - val2;
	return result;
}



int main(void)
{
   float fval1 = 0, fval2 = 0;
	char sign = 'l';
	
	while(1){
		printf("Bitte eine einfache gleichung mit einem Zeichen und Zwei zahlen eingeben:");
		scanf("%f %c %f", &fval1, &sign, &fval2);
		if (sign == '+'){
			printf("Ergebniss: %.2f\n", add(fval1,fval2));
			}
		else if (sign == '-'){
			printf("Ergebniss: %.2f\n", sub(fval1,fval2));
			}
		else if (sign == '/'){
			if( fval2 != 0){
				printf("Ergebniss: %.2f\n", dev(fval1,fval2));
				}
			else{
				printf("Division mit 0 nicht erlaubt!!! \n");
				}
			}
		else if (sign == '*'){
			printf("Ergebniss: %.2f\n", multi(fval1,fval2));
			}
		}
	return 0;
		
 


    
}

