/**
 * Author: 
 * Date: 
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }

  //TODO: place your code here

   else
   {
    printf("\n\n--");

    int v;
    int x=1;
    int y=1;

    for(int p=1; p<=n ;p++)
    {
      printf("%d",p);
    }
    printf("\n\n");
    
   }
  return 0;
}