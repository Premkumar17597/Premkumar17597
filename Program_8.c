/* Program_8 : To calculate weather forecast
   DOC : 02/09/2021
   Author : Premkumar
   Purpose : challenge to calculate weather forecast of last 5 years
   */
   
#include <stdio.h>
#include <stdlib.h>

#define MONTH 12
#define YEAR 5

int main() {
// Initialize an array with rain data
    float rain[5][12] = 
    {
        {1.2, 2.3, 4.5, 1.0, 1.2, 2.5, 6.3, 7.5, 1.2, 2.3, 1.4, 1.5},
        {1.3, 1.3, 3.5, 1.5, 2.2, 1.5, 4.3, 5.5, 1.5, 2.3, 1.4, 1.5},
        {1.1, 0.3, 6.5, 1.5, 1.0, 2.5, 6.3, 7.5, 1.2, 2.7, 2.4, 7.5},
        {6.0, 3.3, 4.5, 2.0, 1.4, 2.5, 6.3, 3.5, 1.2, 2.3, 1.6, 1.5},
        {1.2, 2.3, 5.5, 1.0, 1.2, 1.5, 2.3, 1.5, 3.2, 2.3, 1.4, 1.5}
    };
    int year;
    int month;
    float subTotal;
    float total;
    
    printf("YEAR\t\tRAINFAL  (inches)\n");
// To calculate to Rainfal and yearly average.
      for (year = 0, total = 0; year < YEAR; ++year) {
          for (month = 0, subTotal = 0; month < MONTH; ++month) {
              subTotal += rain[year][month];
          }
          printf("%d\t\t%.2f\n", 2016 + year, subTotal);
          total += subTotal;
      }
      printf("\nThe yearly average rainfal is : %.2f\n", total / YEAR);
      
// To print monthly averages.
      printf("\nMonthly Averages : \n\n");
      printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug   Sep   Oct   Nov   Dec\n");
      for (month = 0, subTotal = 0; month < MONTH; ++month) {
          for (year = 0; year < YEAR; ++year) {
              subTotal += rain[year][month];
          }
          printf("%4.1f ", subTotal);
      }
      printf("\n");
      
	return 0;
}
