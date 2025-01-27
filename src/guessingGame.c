/**
 * This program plays a guessing game with the user.
 * It selects a random number between 1 and 1000 and
 * prompts the user to guess the value, informing them
 * of whether or not it is higher or lower than the
 * actual value.  Once the user guesses correctly, the
 * game ends and the number of guesses is displayed.
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {

  // the game will be played by creating a random
  // number between 1 and 1000
  int n = 1000;

  // seed the random number generator
  srand(time(NULL));
  // the program generates a random number between 1 and 1000
  // the user will try to guess what this number is
  int number = (rand() % n) + 1;

  // initialize the user's "guess" to be an invalid value
  int guess = -10;
  int numGuesses = 0;

  printf("Guess-A-Number Game!\n");
  printf("Enter a number between 1 and %d\n", n);
  //TODO: place your code here

  while(1)
  {
    printf("enter your guess :  ");
    scanf("%d", &guess);
    numGuesses++;

    if(guess<1 || guess>n)
    {
      printf("enter the valid guess between 1 and %d.\n");
    }
    else if(guess < number)
    {
      printf("the guess is higher! try again");
    }
    else if(guess > number)
    {
      printf("the guess is lower! try again");
    }
    else
    {
    printf("Congratulations, you found it!  Number of guesses: %d\n", numGuesses);
     return 0;
  }

  

}
}
