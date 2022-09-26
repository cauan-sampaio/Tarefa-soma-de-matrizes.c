//NOME: FRANCISCO CAUAN ALMEIDA SAMPAIO
//MATRICULA:20221045050443
//Usuario:cauan-sampaio

#include <stdio.h>
#include <stdlib.h>


int main() {
int linha, coluna, i, tam, Tama;

printf("insira a quantidade de linhas:\n");
scanf ("%d", &tam);
printf("insira a quantidade de linhas:\n");
scanf ("%d", &Tama);

int a[tam][Tama];
int b[tam][Tama];
int matriz[tam][Tama];

for ( linha=0; linha<tam; linha++ )
  for ( coluna=0; coluna<Tama; coluna++ )
  {
     printf ("\nElemento[%d][%d] = ", linha, coluna);
          scanf ("%d", &a[ linha ][ coluna ]);
  }

for ( linha=0; linha<tam; linha++ )
  for ( coluna=0; coluna<Tama; coluna++ )
  {
      printf ("\nElemento[%d][%d] = ", linha, coluna);
          scanf ("%d", &b[ linha ][ coluna ]);
  }

for(i=0; i<=10;i++){
  for ( linha=0; linha<tam; linha++){
    for( coluna = 0 ; coluna < Tama; coluna++){
             float  t = 0.1 * i;

     matriz[linha][coluna] = (1-t)*a[linha][coluna] + t*b[linha][coluna];
        printf("%i   ", matriz[linha][coluna]);

      }
 printf("\n");
}
     printf("\n");
  }
}
