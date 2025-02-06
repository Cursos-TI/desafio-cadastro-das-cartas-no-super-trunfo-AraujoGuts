#include <stdio.h>

int main(){
     ///Variaveis:
    char Cidade[20], Estado[20], Codigo[20], Pais[20];
    float Populacao, PIB, Area, Densidadepopulacional, PIBPerCapita;
    int Pontosturisticos;
    char Cidade2[20], Estado2[20], Codigo2[20], Pais2[20];
    float Populacao2, PIB2, Area2, Densidadepopulacional2, PIBPerCapita2;
    int Pontosturisticos2;
 
 /// Titulo do Jogo:

 printf("***Super Trunfo:***\n\n");

 printf("\n\n Preencha os Dados da Primeira Carta:\n\n")
 
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

  printf("\n***Segunda Carta***\n\n");

  printf("Digite o Nome País: \n");
  scanf("%s", &Pais2);

  printf("Digite o Nome Estado: \n");
  scanf("%s", &Estado2);
 
  printf("Digite o Nome da 2°cidade: \n");
  scanf("%s", &Cidade2);

  printf("Digite o Codigo da 2°Carta: \n");
  scanf("%s", &Codigo2);

  printf("Digite a População Total: \n");
  scanf("%f", &Populacao2);

  printf("Digite o PIB: \n");
  scanf("%f", &PIB2);

  printf("Digite a Área: \n");
  scanf("%f", &Area2);

  printf("Quantidade de Pontos Turisticos: \n");
  scanf("%d", &Pontosturisticos2); 
  
  Densidadepopulacional = (Populacao2 / Area2);
  PIBPerCapita = (PIB2 / Populacao2);

  ///Abertura da apresentaçao dos dados da carta:

  printf("\n***Sua carta é:***\n\n");
 
 
 ///Impressão de dados preechidos de maneira organizada e apresentando de forma e intendimento facil.

  printf("País: %s \n Estado: %s \n Cidade: %s \n Codigo: %s \n", Pais, Estado, Cidade, Codigo);
  printf("População: %f \n PIB: %f \n Área: %f \n Pontos Turisticos: %d \n", Populacao, PIB, Area, Pontosturisticos);
  printf("Densidade Populacional: %.3f \n PIB Per Capita:%.3f \n ", Densidadepopulacional, PIBPerCapita);
  
 printf("\n\n***Sua 2°carta é:***\n\n");
 
  printf("País: %s \n Estado: %s \n Cidade: %s \n Codigo: %s \n", Pais2, Estado2, Cidade2, Codigo2);
  printf("População: %f \n PIB: %f \n Área: %f \n Pontos Turisticos: %d \n", Populacao2, PIB2, Area2, Pontosturisticos2);
  printf("Densidade Populacional: %.3f \n PIB Per Capita:%.3f \n ", Densidadepopulacional2, PIBPerCapita2);

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
  printf("\n\n***Batalha de atributos (Carta 1):****\n\n");

  printf("População Carta 1 > Populaçao Carta 2: %d\n", Populacao > Populacao2);

  printf("PIB Carta 1 > PIB Carta 2: %d\n", PIB > PIB2);

  printf("Àrea Carta 1 > Àrea Carta 2: %d\n", Area > Area2);

  printf("Pontos Turisticos Carta1 > Pontos Turisticos Carta 2: %d\n", Pontosturisticos > Pontosturisticos2);

  printf("Densidadepopulacional < Densidadepopulacional2: %d\n", Densidadepopulacional < Densidadepopulacional2);
 
  printf("PIB Per Capita Carta 1B > PIB Per Capita Carta 2: %d\n", PIBPerCapita > PIBPerCapita2);
  
 
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
  printf("\n\n***Batalha de atributos 2°carta:***\n\n");


  printf("População Carta 1 < Populaçao Carta 2: %d\n", Populacao < Populacao2);

  printf("PIB Carta 1 < PIB Carta 2: %d\n", PIB < PIB2);

  printf("Área Carta 1 < Área Carta 2: %d\n", Area < Area2);

  printf("Pontos Turisticos Carta1 < Pontos Turisticos Carta 2: %d\n", Pontosturisticos < Pontosturisticos2);

  printf("Densidadepopulacional > Densidadepopulacional2: %d\n", Densidadepopulacional > Densidadepopulacional2);

  printf("PIB Per Capita Carta 1 < PIB Per Capita Carta 2: %d\n", PIBPerCapita < PIBPerCapita2);


 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 printf("\N\N\NA CARTA QUE TIVER MAIS PONTOS É A VENCEDORA!!!!\N\N\N")

    return 0;
}
