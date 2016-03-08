#include <stdio.h>

#define MAX_COUNT 128

int main() {
	int n = 0, i, r, j, c;
	int h[MAX_COUNT];
	for (i = 0; i < MAX_COUNT; i += 1) {
		h[i] = 0;
	}
	while((c = getchar()) != EOF) {
		h[c] += 1;
	}	
	printf("\n<<<Histogram showing of frequencies of the different characters occured in the input>>>");
	for (i = 1; i < MAX_COUNT; i += 1) {
		r = h[i];
		if (r) {
			if (i == '\n')
				printf("\n\\n |");
			else if (i == '\t')
				printf("\n\\t |");
			else if (i == ' ')
				printf("\n\\s |");
			else
				printf("\n %c |", i);	

			for (j = 1; j <= r; j += 1) {
				printf("#");	
			} 	
			printf("(%d)", r);
		}	
	}
	putchar('\n');
	return 0;
}

