#include <stdio.h>

int main()
{
  char Nome, Estado, CodigoDaCarta[20], NomeDaCidade[50];
  int Populacao, NumeroDePontosTuristicos;
  float Area, PIB;

  printf("Carta1 \n");

  printf("Uma letra que represente seu estado: \n");
  scanf("%c", &Estado);

  printf("Digite a letra do seu estado, junto com um número de 01 a 04 (ex: C01, B02) \n");
  scanf("%s", &CodigoDaCarta);

  printf("Nome da sua cidade: \n");
  scanf("%s", &NomeDaCidade);

  printf("O número de habitantes da sua cidade: \n");
  scanf("%d", &Populacao);

  printf("A aréa da cidade em quilometros quadrados \n");
  scanf("%f", &Area);

  printf("O produto interno Bruto da cidade \n");
  scanf("%f", &PIB);

  printf("A quantidade de pontos turisticos da sua cidade: \n");
  scanf("%i", &NumeroDePontosTuristicos);

  printf("-Estado: %c \n-CodigoDaCarta: %s \n-NomeDaCidade: %s \n-População: %i \n", Estado, CodigoDaCarta, NomeDaCidade, Populacao);
  printf("-Area: %f \n-PIB: %f \n-NúmeroDePontosTurísticos: %i \n", Area, PIB, NumeroDePontosTuristicos);
  return 0;
}