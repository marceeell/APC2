#include <stdio.h>

int mains(){
  int i = 5;
  int *p;
  p = &i;
  printf("p  (&i - endereço de i): %p\n", p);
  printf("*p (i-     valor de i): %d\n", *p);

  *p = 7; // i =7;
  printf("Introduza um numero: ");
  scanf("%d", p); //scanf("%d", &i);
  printf("p  (&i - endereço de i): %p\n", p);
  
return 0;
}