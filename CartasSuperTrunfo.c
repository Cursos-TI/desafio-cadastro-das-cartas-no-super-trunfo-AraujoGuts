#include <stdio.h>

int main(){
     ///Variaveis:
    char Cidade[20], Estado[20], Codigo[20], Pais[20];
    float Populacao, PIB, Area, Densidadepopulacional, PIBPerCapita;
    int Pontosturisticos;
 
 /// Titulo do Jogo:

 printf("***Super Trunfo:***\n\n");
 
 ///Construção de dados preechiveis.

  printf("Digite o Nome País: \n");
  scanf("%s", &Pais);

  printf("Digite o Nome Estado: \n");
  scanf("%s", &Estado);
 
  printf("Digite o Nome da cidade: \n");
  scanf("%s", &Cidade);

  printf("Digite o Codigo da Carta: \n");
  scanf("%s", &Codigo);

  printf("Digite a População Total: \n");
  scanf("%f", &Populacao);

  printf("Digite o PIB: \n");
  scanf("%f", &PIB);

  printf("Digite a Área: \n");
  scanf("%f", &Area);

  printf("Quantidade de Pontos Turisticos: \n");
  scanf("%d", &Pontosturisticos); 
  
  Densidadepopulacional = (Populacao / Area);
  PIBPerCapita = (PIB / Populacao);

  ///Abertura da apresentaçao dos dados da carta:

  printf("\n***Sua carta é:***\n\n");
 
 
 ///Impressão de dados preechidos de maneira organizada e apresentando de forma e intendimento facil.

  printf("País: %s \n Estado: %s \n Cidade: %s \n Codigo: %s \n", Pais, Estado, Cidade, Codigo);
  printf("População: %f \n PIB: %f \n Área: %f \n Pontos Turisticos: %d \n", Populacao, PIB, Area, Pontosturisticos);
  printf("Densidade Populacional: %.3f \n PIB Per Capita:%.3f \n ", Densidadepopulacional, PIBPerCapita);
  



    return 0;
}
