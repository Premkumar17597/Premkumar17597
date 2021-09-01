/* Program_4 : Byte size of each data types
   DOC : 01/09/2021
   Author : Premkumar
   Purpose : Challenge to print the byte size of each data types
*/

#include <stdio.h>

int main()
{
    // To print the byte size of each data types.
    printf("Variable of type char occupies %lu bytes\n", sizeof(char));
    printf("Variable of type int occupies %lu bytes\n", sizeof(int));
    printf("Variable of type float occupies %lu bytes\n", sizeof(float));
    printf("Variable of type double occupies %lu bytes\n", sizeof(double));
    printf("Variable of type short occupies %lu bytes\n", sizeof(short));
    printf("Variable of type long occupies %lu bytes\n", sizeof(long));
    printf("Variable of type long long occupies %lu bytes\n", sizeof(long long));
    printf("Variable of type long int occupies %lu bytes\n", sizeof(long int));
    printf("Variable of type long long int occupies %lu bytes\n", sizeof(long long int));
    printf("Variable of type long double occupies %lu bytes\n", sizeof(long double));
  
	return 0;
}
