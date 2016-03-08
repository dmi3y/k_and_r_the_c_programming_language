#include<stdio.h>

int main()
{
	float fahr, cels;
	int lower, upper, step;
	lower = -100;
	upper = 300;
	step = 20;
	
	cels = lower;
	printf("Cels to Fahr from %d to %d.\n", lower, upper);
	while( cels <= upper ) {
		fahr = (9.0/5.0 * cels) + 32.0;
		printf("%3.0f\t%6.1f\n", cels, fahr);
		cels += step;
	}	
	
	return 0;
}

