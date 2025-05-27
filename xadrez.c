#include <stdio.h>

void bispo(int casas)
{

  while (casas < 5)
  {
    printf("cima\n");
    if (casas != 5)
    {
      casas++;
      printf("direita\n");
    }
  }
}

void torre(int casas)
{
    for (casas; casas < 5; casas++) // incrementa caso o valor seja menor que 5
    {
        printf("direita\n");
    }
}

void dama(int casas)
{
    for (casas; casas != 8; casas++) // incrementa caso o valor da casa seja diferente de 8
    {
        printf("esquerda\n");
    }
}

void cavalo(int casas)
{
    while (casas < 2)
    {
        casas++;
        printf("cima\n");

        if(casas == 2) {
            printf("direita\n");
            break;
        }
    }
    
}

int main()
{
    printf("Bispo - 5 movimentos na diagonal direita\n");
    bispo(0);

    printf("\nTorre - 5 movimentos a direita\n");
    torre(0);

    printf("\nDama - 8 movimentos a esquerda\n");
    dama(0);

    printf("\nCavalo - 1 movimento em L para direita\n");
    cavalo(0);

        return 0;
}
