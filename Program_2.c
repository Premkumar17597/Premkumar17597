/* Program_2 : Create and use enum
   DOC : 26/08/2021
   Author : Premkumar
   Purpose : Challenge To create and use enum type
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	enum Company { INFOSYS, HCL, WIPRO, TCS = 10, CTS, FUJITSU };
	
/* Initialize enum variable with founders name.
                  Here "Company" is data type of enum */
	enum Company Narayanamurthy = INFOSYS;
	enum Company ShivnadarNadar = HCL;
	enum Company HashamPremji = WIPRO;
	enum Company KumarMahadev = CTS;
	enum Company TataSons = TCS;
	
/* To display the values of enum */
    printf("Value of INFOSYS : %d\n", Narayanamurthy);
    printf("Value of HCL : %d\n", ShivnadarNadar);
    printf("Value of WIPRO : %d\n", HashamPremji);
    printf("Value of TCS : %d\n", TataSons);
    printf("Value of CTS : %d\n", KumarMahadev);
    
	return 0;
}
