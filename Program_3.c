/* Program_2 : Time converter
   DOC : 31/08/2021
   Author : Premkumar
   Purpose : Challenge to convert time to years and days
*/

#include <stdio.h>

int main() {
    long int minutesInput = 0;
    double years = 0.0;
    int days = 0;
    double minutesInYear = 0.0;
    
    //To get minutes from the user
    printf("Enter the minutes to convert : ");
    scanf("%ld", &minutesInput);
    
    //Calculation part
    minutesInYear = (60*24*365);
    years = (minutesInput / minutesInYear);
    days = (int) ((minutesInput / 60)/24);
    
    //To display the result
    printf("%ld minutes can be approximately %.2f years as well as %d days \n", minutesInput, years, days);
    
    return 0;
}
