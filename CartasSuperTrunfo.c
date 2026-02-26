#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char carta;
char estado;
char Código[50];
char Nome_da_Cidade [50];
int População;
float Área;
float PIB;
int Número_de_Pontos_Turísticos; 

  // Área para entrada de dados
printf("Qual sua carta?\n");
scanf("%c",&carta);

printf("Estado:\n");
scanf("%s", &estado);

printf("Código:\n");
scanf("%s", &Código);

printf("Nome_da_Cidade:\n");
scanf("%s", &Nome_da_Cidade);

printf("População:\n");
scanf("%d", &População);

printf("Área:\n");
scanf("%f", &Área);

printf("PIB:\n");
scanf("%f", &PIB);

printf("Número_de_Pontos_Turísticos:\n");
scanf("%d", &Número_de_Pontos_Turísticos);
  // Área para exibição dos dados da cidade

return 0;
} 
