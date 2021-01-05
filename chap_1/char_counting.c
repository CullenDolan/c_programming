#include <stdio.h>

main() {
	
	int nc;

	for(nc = 0; getchar() != EOF; nc+=1)
		printf("%d", nc);;
	
}