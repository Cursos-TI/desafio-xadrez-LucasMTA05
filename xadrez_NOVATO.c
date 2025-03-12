#include <stdio.h>


int main(){
  
  int bispo;
  int torre = 1;
  int rainha = 1;
  //Declaração das variáveis necessárias, ignorando o bispo cujo valor será definido depois

  for (bispo = 1; bispo <= 5; bispo++ ) {

    printf ("O bispo se moveu %d casa(s) para cima-direita\n", bispo);
  } // A peça inicia com o valor 1, e a cada execução o seu valor aumenta para simular as casas andadas. A mesma lógica se aplica para as peças seguintes



  while (torre <= 5) {
    printf ("A torre se moveu %d casa(s) para a direita\n", torre);
    torre++;
  }



  do {
    printf ("A rainha se moveu %d casa(s) para a esquerda\n", rainha );
    rainha++;
  } while(rainha <= 8);

  

  }