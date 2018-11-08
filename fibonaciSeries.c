#include<stdio.h>
#include<conio.h>

/*
 * Function 	: fibonaciSeriesGenerator
 * Attributes 	: value	=> Which generate nth number of fibonaci Series
 * Description  : Take nth value and generate nth number
 *				  Using Recursion Method.
 * Return Type	: int 
*/
int fibonaciSeriesGenerator(int value) {
	if (value == 0) {
		return 0;
	} else if(value == 1) {
		return 1;
	} else {
		return (fibonaciSeriesGenerator(value - 1) + fibonaciSeriesGenerator(value - 2));
	}
}

int main() {
	
	/* Variables */
	
}
