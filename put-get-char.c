#include <stdio.h>

int main() {
	int c;
	int n = 0;
	while((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			n += 1;
		}
	}
	printf("\nhere we are: %d\n", n);
}

