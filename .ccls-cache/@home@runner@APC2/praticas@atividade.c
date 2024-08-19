#include <stdio.h>

int main() {
  int n = 1025;
  char *ponteiro_char = (char*)&n;
  printf("Valor de n inicial: %d\n", n);
  printf("Primeiro byte: %d\n", *ponteiro_char);
  ponteiro_char++;
  printf("Segundo byte: %d\n", *ponteiro_char);
  ponteiro_char++;
  *ponteiro_char = 1;
  printf("Terceiro byte: %d\n", *ponteiro_char);
  printf("Valor de n final: %d\n", n);

  return 0;
}