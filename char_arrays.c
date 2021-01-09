#include <stdio.h>

#define MAXLINE 10

// function getline returns int value, has 2 parameters
//int getline(char line[], int maxline);
//void copy(char to[], char from[]);

/* print longest line */
main(){
	int len;				// curent line len
	int max;				// max len seen so far
	char line[MAXLINE];		// current input line
	char longest[MAXLINE];	// longest line saved here

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max){
				max = len;
				copy(longest, line);
		}
	if(max > 0)
		printf("%s\n", longest);
	return 0;
}

int getline(char s[], int lim){
	int c, i;

	for (i = 0; i <lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// cop from into to 
void copy(char to[], char from[]){
	int i;
	i = 1;
	while((to[i] = from[i]) != '\0')
		++i;
}