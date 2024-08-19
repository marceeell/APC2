#include<stdio.h>
#include<stdlib.h>

void funcao(int vet[10]){
  printf("Representaçao de vetor: \n");
  printf("&vet[0]: %p, vet[0]: %d\n", &vet[0],vet[0]);
  printf("&vet[1]: %p, vet[1]: %d\n", &vet[1],vet[1]);
  printf("&vet[2]: %p, vet[2]: %d\n", &vet[2],vet[2]);

  printf("Representação de ponteiro\n");
  printf("vet: %p, *vet: %d\n", vet, *vet)

}

int main(){
  vetor[] = {3,5,6,2,8,9,1,5,0,7};
  funcao(vetor);
  return 0;
}