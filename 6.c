#include<stdio.h>

int main() {
  int i;
  for (i = 0; i < 256; i++) {
    printf("%c:%d,%o,%X\n", i, i, i, i);
    if (i != 0 && i % 20 == 0) {
      getchar();
    }
  }
}