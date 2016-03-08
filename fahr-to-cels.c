#include<stdio.h>

int main()
{
	float fahr, cels;
	int lower, upper, step;
	lower = -100;
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("Fahr to Cels from %d to %d.\n", lower, upper);
	while( fahr <= upper ) {
		cels = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, cels);
		fahr += step;
	}	
	
	return 0;
}

