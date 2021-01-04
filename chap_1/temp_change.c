
/* print out a conversion of F to C */
/* ex 1.3 - print a heading above the table*/

#include <stdio.h>

main()
{
	// C = (5/9)(F-32)
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;

	printf("Fahr \t Celcius\n");

	while(fahr <= upper){
		celcius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f \t %0.1f\n", fahr, celcius);
		fahr = fahr + step;
	}

}