/* Program_7 : To find and display the prime numbers
   DOC : 02/09/2021
   Author : Premkumar
   Purpose : challenge to find and dispaly prime numbers
   */
   
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN 5
#define MAX 100

int main() {
    int primes[50] = {[0] = 2, [1] = 3};
    int p;
    int i;
    int primeIndex = 2;
    bool isPrime;
    
// To find prime numbers between 3 to 100
    for (p = MIN;p <= MAX; p = p + 2) {
        isPrime = true;
        for (i = 1; isPrime && p/primes[i] >= primes[i]; ++i) {
            if (p % primes[i] == 0)
                isPrime =false;
        }
        if (isPrime ) {
            primes[primeIndex] = p;
            primeIndex++;
        }
    }
    
// To print the prime numbers

   for (i = 0; primes[i] != 0; ++i)
       printf("%d ", primes[i]);
    
	return 0;
}
