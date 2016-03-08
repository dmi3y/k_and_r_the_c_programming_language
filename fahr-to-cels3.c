#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

float celsFromFahr(float fahr);

int main()
{
	float fahr;
	
	printf("Fahr to Cels from %d to %d.\n", UPPER, LOWER);
	for( fahr = UPPER; fahr >= LOWER; fahr -= STEP ) {
		printf("%3.0f\t%6.1f\n", fahr, celsFromFahr(fahr));
	}	
	
	return 0;
}

float celsFromFahr(float fahr)
{
	float cels;	
	cels = (5.0/9.0) * (fahr - 32.0);
	return cels;
}

