#include <stdio.h>

int main() {
  int n;
  printf("\nEnter n dependents: ");
  scanf("%d", & n);
  long i;
  printf("\nEnter your income of this year: ");
  scanf("%ld", & i);
  long tf, ti, it;
  tf = 12 * (9000000 + n * 3600000);
  ti = i - tf;
  if (ti <= 0) {
    ti = 0;
    it = 0;
  } else if (ti <= 5000000) {
    it = ti * 5 / 100;
  } else if (ti <= 10000000) {
    it = ti * 10 / 100;
  } else if (ti <= 18000000) {
    it = ti * 15 / 100;
  } else {
    it = ti * 20 / 100;
  }

  printf("\nTax-free income:%ld", tf);
  printf("\nTaxable income:%ld", ti);
  printf("\nIncome tax:%ld", it);

  return 0;

}