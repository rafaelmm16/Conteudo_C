/* CABE�ALHO
   Programa: C�lculo da S�rie de Fibonacci
   Arquivo: fibonacci.c
   Objetivo: Fornecida a quantidade de termos (n), calcular a s�rie
             de fibonacci para os n primeiros termos
   Autor(a): Maria das Gra�as
   Vers�o: 1.0

   OBS.: Notar falhas nesse c�digo. Atribui��o de valores desnecessariamente
         em dois momentos. Vale a pena manter ou algo deve ser feito
         para retirar?
 */

/* Importa��o de Bibliotecas */
#include <stdio.h>

/* Programa Principal */
int main(){

   /* Dicion�rio de Dados */
   int n, termoAtual, penultimoTermo, antePenultimoTermo, i;

   /* Solicitar quantidade de termos */
   printf("Informe a quantidade de termos: ");
   scanf("%d",&n);

   printf("\n\nSerie de Fibonacci\n");

   /* Os dois primeiros termos da S�rie de Fibonacci (0 e 1) s�o constantes
      e podem ser impressos na tela diretamente, sem c�lculos */
   if(n >= 1){
      printf("0  ");
   }

   if(n >= 2){
      printf("1  ");
   }

   /* Iniciar os tr�s primeiros termos da s�rie */
   antePenultimoTermo = 0;
   penultimoTermo = 1;
   termoAtual = antePenultimoTermo + penultimoTermo;

   /* LOOP: Calcular os n primeiros termos da s�rie,
      exibindo a partir do 3o. */
   for(i = 3; i <= n; i++){
      printf("%d  ",termoAtual);

      /* Providenciar quebra de linha a cada 5 termos impressos
         Instru��o apenas para facilitar a visualiza��o na tela */
       if ((i % 5) == 0) {
         printf("\n");
      }

      /* calcular os novos termos */
      antePenultimoTermo = penultimoTermo;
      penultimoTermo = termoAtual;
      termoAtual = penultimoTermo + antePenultimoTermo;
   }

   return 1;
}
