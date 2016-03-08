#include <stdio.h>

int main() {
	int c;
	int _c;
	while((c = getchar()) != EOF) {
		if (c == ' ' && _c != ' ') {
			putchar(c);
		}
		if (c != ' ') {
			putchar(c);
		}
		_c = c;
	}
}

