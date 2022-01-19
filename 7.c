#include <stdio.h>

int main() {

  char c1, c2;
  printf("Enter 2 charaters (Enter when enough 2 charaters): ");
  scanf("%c%c", & c1, & c2);
  if (c1 > c2) {
    char t = c1;
    c1 = c2;
    c2 = t;
  }
  int d = c2 - c1;
  printf("d=%d\n", d);
  int i = 0;
  for (i = c1; i < c2; i++) {
    printf("%c:%d,%o,%X\n", i, i, i, i);
  }
  return 0;
}