#include <stdio.h>

#include <ctype.h>

#include <string.h>

int main() {
  char ch[100];
  printf("Enter a string of characters: \n");
  scanf("%s", ch);
  int length = strlen(ch);
  int i;
  int nVowel = 0, nConsonants = 0, nOthers = 0;
  for (i = 0; i < length; i++) {
    ch[i] = toupper(ch[i]);
    if (ch[i] >= 'A' && ch[i] <= 'Z') {
      switch (ch[i]) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        nVowel++;
        break;
      default:
        nConsonants++;
      }
    } else {
      nOthers++;
    }
  }

  printf("\nnVowel = %d", nVowel);
  printf("\nnConsonants = %d", nConsonants);
  printf("\nnOthers = %d", nOthers);

  return 0;
}