#include <stdio.h>

int main() {
  int S = 0;
  int x;
  do {
    printf("Enter x: \n");
    scanf("%d", & x);
    if (x != 0) {
      S = S + x;
    }
  } while (x != 0);

  printf("\nS=%d", S);

  return 0;
}