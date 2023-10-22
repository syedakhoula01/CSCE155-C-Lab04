/**
 * Author(s):
 * Date:
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop
  //for(int i=10; i<20; i+=3) {
   // printf("%d ", i);
  //}
  //printf("\n");

  int i=10;
  while(i<20)
  {
    printf("%d", i);
    i+=3;
  }

  //2. Rewrite the given while loop as an equivalent for loop
  //int k = 3;
  //while(k > -4) {
   // printf("%d ", k);
   // k--;
  //}
 // printf("\n");
   for (int k=3; k>-4; k--)
   {
    printf("%d", k);
   }


  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5

  for(int z=1;z<=n; z++)
  {
    printf("%d ,",z);
  }
     printf("\n");

  //4. Print squares of numbers 1 thru n separated by a comma
  //   except for the last one; example: 1, 4, 9, 16, 25

     for(int a=1 ; a<=n ; a++)
     {
      printf("%d ," , (a*a));
     }

     printf("\n");

  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15
   int sum=0;
   for(int b=1; b<=n; b++)
   {
    sum =sum + b;
   }
   printf("sum of 1 thru %d = %d", n , sum);

  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
  int c;
  int d=0;
  int sq;
  for(c=1 ; c<=n ;c++)
  {
   sq = (c*c);
   d=sq+d;
  }
  printf("\nsummation of squares of numbers from 1 thru %d" ,n , d);

  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6
  int f=0;
  for(int p=1; p<=n; p++)
  {
    if(p%2==0)
    {
      f=f+p;
    }
  }
   printf("summation of even numbers from 1 thru %d =%d" ,n , f);


  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.

  int n;
  printf("enter the value of n: ");
  scanf("%d", &n);

  for(int i=1 ; i<=n ; i++)
  {
    if(i % 7==0 && i%11==0)
    {
      printf("fooBar\n");
    }
    else if(i%7==0)
    {
      printf("foo \n");
    }
    else if(i%11==0)
    {
      printf("bar\n");
    }
    else
    {
      printf("%d\n", i);
    }
  }

  return 0;
}
