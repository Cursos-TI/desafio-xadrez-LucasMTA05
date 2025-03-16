#include <stdio.h>


int main(){
  
  int bispo;
  int torre = 1;
  int rainha = 1;
  int cavalo1, cavalo2;
  //Declaração das variáveis necessárias, ignorando o bispo cujo valor será definido depois

  for (bispo = 1; bispo <= 5; bispo++ ) {

    printf ("O bispo se moveu %d casa(s) para cima-direita\n", bispo);
  } // A peça inicia com o valor 1, e a cada execução o seu valor aumenta para simular as casas andadas. A mesma lógica se aplica para as peças seguintes
    printf ("\n");



  while (torre <= 5) {
    printf ("A torre se moveu %d casa(s) para a direita\n", torre);
    torre++;
  }
  printf ("\n");



  do {
    printf ("A rainha se moveu %d casa(s) para a esquerda\n", rainha );
    rainha++;
  } while(rainha <= 8);
  printf ("\n");



  for (cavalo1 = 0; cavalo1 <= 1; cavalo1++);
  //Loop aninhado para representar o movimento do cavalo
   {
      for (cavalo2 = 1; cavalo1 == 1; cavalo2--);
      //O cavalo começará se movimentando para baixo, e quando ele chegar lá (o valor de cavalo1 for 1), ele andará uma casa para o lado
      {
         printf ("O cavalo se moveu %d casa(s) para baixo\n", cavalo1);
      
      }
      printf ("O cavalo se moveu %d casa para a esquerda\n", cavalo2);
   } 

  }



  

  