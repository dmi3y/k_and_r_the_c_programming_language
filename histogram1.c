#include <stdio.h>

#define MAX_COUNT 10

int main() {
	int n = 0, i, r, j, c;
	int h[MAX_COUNT];
	for (i = 0; i < MAX_COUNT; i += 1) {
		h[i] = 0;
	}
	while((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			if (n > 0) {
				if (n < MAX_COUNT) {
					h[n] += 1;		
				}			
				else {
					printf("Out of %d range.\n", MAX_COUNT);
				}
				n = 0;	
			}
		}
		else {
			n += 1;
		}
	}	
	printf("\n<<<Histogram showing length of the words occured in the input (max length is %d)>>>", MAX_COUNT);
	for (i = 1; i < MAX_COUNT; i += 1) {
		r = h[i];
		printf("\n%2d |", i);	
		if (r) {
			for (j = 1; j <= r; j += 1) {
				printf("#");	
			} 	
			printf("(%d)", r);
		}	
	}
	putchar('\n');
	return 0;
}

