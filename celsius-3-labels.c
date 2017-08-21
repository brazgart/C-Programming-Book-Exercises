#include <stdio.h>

/* print Fahrenheir-Celsius table
	for fahr = 0, 20, ..., 300
	formula C=(5/9)(F-32) */

main()
{
		float fahr, celsius;
		int lower, upper, step;
		
		lower = 0;		/* lower limit of temperature table */
		upper = 300; 	/* upper limit */
		step = 20;		/* step size */
		
		fahr = lower;
		
		printf("Celsius     Fahrenheit\n");
		while (fahr <= upper) {
			celsius = (5.0/9.0) * (fahr-32);
			printf("%7.0f %11.1f\n", fahr, celsius);
			fahr = fahr + step;
		}
	
	
}
