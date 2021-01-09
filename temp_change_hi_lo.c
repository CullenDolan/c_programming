// temp change but going from 300 to 0

#include <stdio.h>

main(){
	// define data types
	int fahr;
	// dont define variables because everything is in for loop

	// for loop C = (5/9)(F-32)
	printf("Fahr\tCelcius\n");
	for(fahr = 300; fahr>=0; fahr -= 30){
		printf("%d\t%0.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}