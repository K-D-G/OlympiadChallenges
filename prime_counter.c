
/*
  Prime Counter
  Description: Counts the amount of prime numbers up to M and outputs them
  Problem: https://www.olympiad.org.uk/programs/bio1995-samples/bio95_sm.html
  Author: Kieran Grayshon
*/
#include <stdio.h>

int main(){
  const unsigned int M=35; //Boundary
  unsigned int primes=0;
  unsigned int tests=0;
  unsigned int j; //The current divisor being checked

  printf("The list of primes between 1 and M:");

  //Loop through all values between 2 and M
  for(unsigned int i=2; i<M; i++){
    //We know that if i%j!=0 for j<i/2 then it is prime
    //So check and break for efficiency reasons
    j=2;
    while(j<(i/2)+1){
      tests++;
      if(i%j==0){
        break;
      }
      j++;
    }

    //If the counter reached the end then it is prime
    if(j==(i/2)+1){printf("%i ", i);primes++;}
  }
  //Output data
  printf("\n");
  printf("Number of primes between 1 and M (%u): %i\n", M, primes);
  printf("Total number of tests performed: %i\n", tests);
  return 0;
}
