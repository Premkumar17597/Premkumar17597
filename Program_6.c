/* Program_6 : Guess the Number game
   DOC : 01/09/2021
   Author : Premkumar
   Purpose : challenge to create guess the number game
   */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 20

int main() {
    int randomNumber =0;
    int guess = 0;
    int numberOfGuesses = 5;
    time_t t;
    
// Initialize random number generator.
    srand((unsigned) time(&t));
    
// To get the random number.
    randomNumber = rand() % (RANGE + 1);
    
// To Display Instructions.
    printf("This is the guess game!\n");
    printf("You have to guess the number between 0 and 20\n");

// TO get input and verify the result.
    for (numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses)
    {
        printf("You have %d tr%s left.\n", numberOfGuesses,
                      (numberOfGuesses == 1 ? "y" : "ies"));
        printf("Enter your guess : \n");
        scanf("%d", &guess);
        
        if (randomNumber == guess) {
            printf("Congratulations! You have done it. %d is my number\n", guess);
            return 0;
        }
        else if (guess < 0 || guess > 20) {
            printf("You have entered invalid number.\n");
        }
        else {
            printf("%d is %s than my number.\n", guess,
                     (guess > randomNumber ? "greater" : "less"));
        }
        }
        printf ("Sorry! you could not found. My number is : %d!\n", randomNumber);
	
	return 0;
}
