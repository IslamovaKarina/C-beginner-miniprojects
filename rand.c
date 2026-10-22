#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  int a = -1;
  int guess = rand() % 11;

  while (a != guess) {
    printf("Guess my num:");
    scanf("%d", &a);

    if (a < guess) {
      printf("More\n");
    } else if (a > guess) {
      printf("Less\n");
    }
  }
  printf("Guessed, the number was %d\n", guess);
  return 0;
}