#include <stdio.h>

#define OFF 0
#define ON 1

int main() {
	int c;
	int st;
	int f = ON;
	int n;
	while((c = getchar()) != EOF) {
		if (f) {
			printf("\n---------------------\n");
			f = OFF;
		}
		if ((c ==  ' ' || c == '\t')  && st == ON) {
			printf("\n");
			st = OFF;
		}
		else if (c != ' ' && c != '\t' && c != '\n') {
			putchar(c);
			st = ON;
		}
		else if (c == '\n') {
			printf("\n---------------------\n");
			f = ON;
		}
	}
	return 0;
}

