#include <math.h>
#include <stdio.h>

int isPrime(int toCheck) {
  if (toCheck <= 1) {
    return 0;
  }
  int divisorNum = 2;
  while (divisorNum <= sqrt(toCheck)) {
    if (toCheck % divisorNum == 0) {
      return 0;
    }
    divisorNum++;
  }
  return 1;
}

int main(void) {
  // right answer
  int testInput1 = 25;
  if (0 != isPrime(testInput1)) {
    printf("%d is not a prime, but you say yes", testInput1);
  }
  // negative input
  int testInput2 = -1;
  if (0 != isPrime(testInput2)) {
    printf("%d is not a prime, but you say yes", testInput2);
  }
  // edge case input
  int testInput3 = 0;
  if (0 != isPrime(testInput3)) {
    printf("%d is not a prime, but you say yes", testInput3);
  }
  int testInput4 = 1;
  if (0 != isPrime(testInput4)) {
    printf("%d is not a prime, but you say yes", testInput4);
  }
}
