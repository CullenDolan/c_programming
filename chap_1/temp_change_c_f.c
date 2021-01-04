//ex 1.4

#include <stdio.h> 

main(){
	// define your data types
	float fahr, celcius;
	int step, lower, upper;

	// defne variables
	celcius = 0;
	lower = 0;
	step = 30;
	upper = 300;

	// write while loop
	// F = C * (9/5) + 32
	printf("Celcius\tFahrenheit\n");
	while (celcius <= upper) {
		fahr = celcius * 9.0 / 5.0 + 32;
		
		printf("%0.1f\t%0.1f\n", celcius, fahr);
		celcius += step;

	}
}