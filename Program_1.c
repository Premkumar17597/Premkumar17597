/* Program 1 : Area and Perimeter of the rectangle
   DOC : 26/08/2021
   Author : Premkumar
   Purpose : To calculate Area and Perimeter of the rectaiangle
   */

#include <stdio.h>

int main() {
	double width = 32.5;
	double height = 22.5;
	double perimeter;
	double area;
	
/* To calculate the perimeter and area of the rectangle */
	perimeter = 2.0 * (width + height);
	area = width * height;
	
/* To display the output data */
	printf("Width is : %g, Height is : %g\n", width, height);
	printf("Perimeter of the rectangle : %g\n", perimeter);
	printf("Area of the rectangle : %g\n", area);
	
	return 0;
}
