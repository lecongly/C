#include <stdio.h>

int main() {
  int x, y;
  do {
    printf("Enter x:\n");
    scanf("%d", & x);
    printf("Enter y:\n");
    scanf("%d", & y);
    int t = x;
    x = y;
    y = t;
    printf("x=%d, y=%d\n", x, y);
  } while (x != 0 && y != 0);
  return 0;
}