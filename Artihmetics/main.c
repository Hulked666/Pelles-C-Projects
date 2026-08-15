#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    long double ldval = 8.8;
	double dval = 5.5;
	float fval = 3.3;


	printf("Quadratzahl berechnungen:\n");
	printf("(long double) squrtl(%Lf) = %Lf\n", ldval, sqrtl(ldval));
	printf("(double) squrt(%f) = %f\n", dval, sqrt(dval));
	printf("(float) squrtf(%f) = %f\n", fval, sqrtf(fval));
}

