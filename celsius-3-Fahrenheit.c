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
		
		celsius = lower;
		
		printf("Fahrenheit     Celsius\n");
		while (celsius <= upper) {
			fahr = (celsius * (9.0/5.0) + 32); //new conversion
			//celsius = (5.0/9.0) * (fahr-32);
			printf("%6.0f %15.1f\n", celsius, fahr);
			celsius = celsius + step;
		}
	
	
}
