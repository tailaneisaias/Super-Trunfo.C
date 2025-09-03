#include <stdio.h>

int main()
{
  char Nome, Estado[50], CodigoDaCarta[50], NomeDaCidade[50];
  int Populacao, NumeroDePontosTuristicos;
  float Area, PIB;

  printf("Carta1 \n", Nome);

  printf("Uma letra que represente seu estado: \n");
  scanf("%s", &Estado);

  printf("Digite a letra do seu estado, junto com um número de 01 a 04 (ex: C01, B02) \n");
  scanf("%s", &CodigoDaCarta);

  printf("Nome da sua cidade: \n");
  scanf("%s", &NomeDaCidade);

  printf("-Estado: %s \n-CodigoDaCarta: %s \n-NomeDaCidade: %s \n", Estado, CodigoDaCarta, NomeDaCidade);
  return 0;
}