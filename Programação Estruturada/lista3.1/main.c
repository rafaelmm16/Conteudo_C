/*CABE�ALHO
    Objetivo: Ler um n�meros e verificar se ele � par ou �mpar.
    Autor:Rafael Merlo Mendes
    Data:12/05/2017
    Vers�o:1.0 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Variaveis*/
    int numero;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o n�mero:");
    scanf("%d", &numero);
    /*Condicional*/
    if (numero%2==0){
          printf ("%d Par", numero);
    }
    if (numero%2==1)
    {
          printf ("%d Impar", numero);
    }
    return (0);
}
