#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
	float fahr, cels;
	
	printf("Fahr to Cels from %d to %d.\n", UPPER, LOWER);
	for( fahr = UPPER; fahr >= LOWER; fahr -= STEP ) {
		cels = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, cels);
	}	
	
	return 0;
}

