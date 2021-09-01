/* Program_5 : To calculate the netpay
   DOC : 01/09/2021
   Author : Premkumar
   Purpose : challenge to calculate grosspay, netpay and taxes
   */

#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main() {
	int hours = 0;
	double grosspay = 0.0;
	double taxes = 0.0;
	double netpay = 0.0;
	double overTimePay = 0.0;
	
// To get work details from user
    printf("Please enter the number of hours worked in this week : \n");
    scanf("%d", &hours);
    
// Grosspay calculation part
    if (hours <= OVERTIME) {
        grosspay = hours * PAYRATE;
    }
    else {
        grosspay = 40 * PAYRATE;
        overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grosspay += overTimePay;
    }
    
// Tax calculation part
   if (grosspay <= 300) {
       taxes = grosspay * TAXRATE_300;
   }
   else if (grosspay > 300 && grosspay <= 450) {
       taxes = 300 * TAXRATE_300;
       taxes += (grosspay - 300) * TAXRATE_150;
   }
   else if (grosspay >450) {
       taxes = 300 * TAXRATE_300;
       taxes += 150 * TAXRATE_150;
       taxes += (grosspay - 450) * TAXRATE_REST;
   }
   
// Netpay calculation part
    netpay = grosspay - taxes;
   
// To print the result
    printf("Grosspay for this week : $%.2f\n", grosspay);
    printf("Tax detected for this week : $%.2f\n", taxes);
    printf("Netpay for this week : $%.2f\n", netpay);
    
	return 0;
}
