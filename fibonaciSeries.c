/**
 * \file fibonaciSeries.c
 * \author Harsh
 * \date 13 Dec 2018
 * \brief Printing the fibonacci Series using recursion
 *
 * \see https://harshppatel.github.io
 */


#include<stdio.h>
#include<conio.h>

/*
 * Function 	: fibonaciSeriesGenerator
 * Attributes 	: value	=> Which generate nth number of fibonaci Series
 * Description  : Take nth value and generate nth number
 *				  Using Recursion Method.
 * Return Type	: int 
*/

/**
 * \brief Function named fibonaciSeriesGenerator which will take parameter of the number (a limit) till where the user want to print the fibonacci series and prints appropriate Series.
 * 
 * \fn fibonaciSeriesGenerator(int value)
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : value :=> (type: int) a limit of the series Or the last number of Series<br>
 *  	<STRONG>Function type</STRONG> : int <br>
 *		<STRONG>return Values</STRONG> : 
 *		<UL>
 *			<LI>0 : If value is equal to '0'</LI>
 *			<LI>1 : If value is equal to '1'</LI>
 *			<LI>fibonacci Series's nth value : sum of (n - 1) value and (n - 2) value</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  // Passing the variable
 *  int limit = 5;
 *  
 *  fibonaciSeriesGenerator(limit);
 *  
 *  // Passing Integer Number
 *
 *  fibonaciSeriesGenerator(5);
 *  \endcode
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

 /**
 * \brief main function which runs the program
 * 
 * \fn main
 * 
 *  <P>
 * 		Main functions runs when program runs. <br>
 * 		It prints the instructions and ask for the value of n to the user. It uses the for loop to run fibonaciSeriesGenerator continuous. <br>
 *		For loop breaks when loopControl becomes n. <br>
 *	</P>
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : int <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>limit : (type: int) limit of series</LI>
 *			<LI>loopControl : (type: int) to Control the loop</LI>
 *      </UL>
 *  </P>
 *  
 */

int main() {
	
	/* Variables */
	int limit;
	int loopControl;
	
	/* Taking User Input */
	printf("Please Enter the limit : ");
	scanf("%d", &limit);
	
	/* Output */
	printf("Your Fibonaci Series : \n");
	/* For Loop */
	for (loopControl = 0; loopControl <= limit; loopControl++) {
		printf("  %d\n", fibonaciSeriesGenerator(loopControl));
	}
	
	getch();
	return 0;
}
