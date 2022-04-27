#include <stdio.h>
#include <string.h>

int fizzbuzz(int n) {
  int i;
  for (i = 1; i <= n; i++) {
    char output[12] = "";
    if (i % 3 == 0) {
      strcat(output, "Fizz");
    }
    if (i % 5 == 0) {
      strcat(output, "Buzz");
    }
    if (strlen(output) > 0) {
      printf("%s\n", output);
    } else {
      printf("%d\n", i);
    }
  }
  return 0;
}

int main() {
  int number;
  printf("What number would you like to go up to? ");
  scanf("%d", &number); 
  fizzbuzz(number);
  return 0;
}