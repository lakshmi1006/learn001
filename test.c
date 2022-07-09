#include <stdio.h>
#include "arthemetic.h"
void main(void)
{
	int sum = 0;
	int subtract = 0;
	int multiplication = 0;
	double division = 0;
	sum = sum_arth(5,10);
	printf("sum of 2 numbers %d\n",sum);
	subtract = subtract_arth(30,20);
	printf("subtract of  2 numbers is %d\n",subtract);
	multiplication = multiplication_arth(20,20);
	printf("multiplication of 2 numbers is: %d\n",multiplication);
	division = division_arth(30,20);
	printf("division of 2 numbers is: %d ",division);
}