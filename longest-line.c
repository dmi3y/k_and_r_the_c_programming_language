#include <stdio.h>
#define MAXLINE 1000

int gotline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len, max = 0;
	char line[MAXLINE], longest[MAXLINE];

	len = gotline(line, MAXLINE);
	while ( len ) {
		if ( len > max ) {
			max = len;
			copy(longest, line);
		}
		len = gotline(line, MAXLINE);
	}	
	if ( max ) {
		printf("%s", longest);
	}
	return 0;
}

int gotline(char line[], int maxline) {
	int c = getchar(), i = 0;
	while ( (c != "\n" || c != EOF) && i < maxline ) {
		line[i] = c;
		c = getchar();	
		i += 1;	
	}
	if ( c == "\n" ) {
		line[i] = c;
		i += 1;
	}
	line[i] = "\0";
	return i;
}

void copy(char to[], char from[]) {
	int i;
	for ( i = 0; from[i] != "\0"; i += 1 ) {
		to[i] = from[i];
	}	
}

