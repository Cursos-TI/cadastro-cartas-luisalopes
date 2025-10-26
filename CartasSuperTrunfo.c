#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_a, estado_b; //Declaração das variáveis de cada estado, da carta A e carta B.
  char codigo_a[5]; //Declarei os códigos de cada carta em linhas separadas porque não sei se a restrição de caracteres vai dar bug se ficar junta.
  char codigo_b[5]; //Declaração de código da carta B; a de cima foi da carta A.
  char cidade_a[50]; //Declaração da variável do nome da cidade A, linhas separadas pelo mesmo motivo do código.
  char cidade_b[50]; //Declaração da variável do nome da cidade B.
  int qtd_pop_a, qtd_pop_b, n_turismo_a, n_turismo_b; //Declaração de todas as variáveis tipo int.
  float area_a, area_b, pib_a, pib_b; //Declaração de todas as variáveis tipo float.

  /*
  Sobre as variáveis int e float:
  As variáveis qtd_pop_a e qtd_pop_b são referentes ao número da população das cidades A e B.
  As variáveis n_turismo_a e n_turismo_b são referentes ao número de pontos turísticos de cada cidade, A e B.
  As variáveis area_a e area_b são referentes à área, em km2, das cidades A e B.
  As variáveis pib_a e pib_b são referentes ao PIB de cada cidade, A e B.
  */

  // Área para entrada de dados
  printf("Boas-vindas ao Desafio Super Trunfo - Países!\n");
  
  printf("Para poder jogar o Super Trunfo, vamos primeiro precisar registrar nossas cartas no montante.\n");

  // Aqui começa o registro da carta A01, do estado A.
  printf("Vamos começar com o estado.\nVocê precisa escolher uma letra, de A a H, para representar o estado da primeira carta.\n");
  printf("Digite o estado da primeira carta (escolha uma letra de A a H): ");
  scanf(" %c", &estado_a); //Coloquei espaço antes do %c para evitar problema de buffer ao apertar 'Enter'.

  getchar(); //Tive que ver no Stack Overflow como evitar o problema do buffer guardar 'Enter' como caractere ao usar o fgets. Essa foi uma solução.
  printf("Agora digite o código da carta (letra do estado + código de 01 a 04, tudo junto): ");
  fgets(codigo_a, 5, stdin);

  //getchar(); //Limpeza de buffer.
  printf("Digite o nome da cidade que vai ficar nesta carta: ");
  fgets(cidade_a, 50, stdin);

  printf("Vamos registrar agora o tamanho da população desta cidade. Digite apenas o número, sem espaços, pontos ou vírgulas: ");
  scanf("%d", &qtd_pop_a);

  printf("Registre também a área, em quilômetros quadrados, da cidade; use ponto em vez de vírgula: ");
  scanf("%f", &area_a);

  printf("Quase lá! Vamos botar o PIB da cidade agora. Lembre de usar ponto em vez de vírgula: ");
  scanf("%f", &pib_a);

  printf("Por fim, vamos agora adicionar quantos pontos turísticos essa cidade tem: ");
  scanf("%d", &n_turismo_a);

  printf("Terminamos o registro da primeira carta!\n");

  // Aqui começa o registro da carta B01, do estado B.
  printf("Vamos registrar a segunda carta?\n");

  printf("Digite o estado da segunda carta (escolha uma letra de A a H): ");
  scanf(" %c", &estado_b); //Mesmo espaço que coloquei no registro do estado da carta A.

  getchar(); //Limpeza de buffer.
  printf("Agora coloque o código da segunda carta (letra do estado + código de 01 a 04, tudo junto): ");
  fgets(codigo_b, 5, stdin);

  //getchar(); //Limpeza de buffer.
  printf("Escreva agora o nome da cidade da segunda carta: ");
  fgets(cidade_b, 50, stdin);

  printf("Digite o número da população desta cidade, sem espaços, vírgulas ou pontos: ");
  scanf("%d", &qtd_pop_b);

  printf("Agora preciso da área, em quilômetros quadrados, da cidade; use ponto em vez de vírgula; ");
  scanf("%f", &area_b);

  printf("Já estamos quase terminando!\nPode digitar o PIB da cidade; use ponto no lugar de vírgula: ");
  scanf("%f", &pib_b);

  printf("E agora vamos para a quantidade de pontos turísticos que a cidade tem: ");
  scanf("%d", &n_turismo_b);

  printf("Ufa! Acabamos de registrar nossas duas cartas!\n");

  // Área para exibição dos dados da cidade
  printf("Agora vamos ver as cartas que temos à nossa disposição!\n");

  // Exibição da carta 1.
  printf("Carta 1:\n");
  printf("Estado: %c\nCódigo: %s\n", estado_a, codigo_a);
  printf("Nome da cidade: %s\nPopulação: %d\n", cidade_a, qtd_pop_a);
  printf("Área: %.2f km^2\nPIB: %.2f\n", area_a, pib_a);
  printf("Número de pontos turísticos: %d\n\n", n_turismo_a);

  // Exibição da carta 2.
  printf("Carta 2:\n");
  printf("Estado: %c\nCódigo: %s\n", estado_b, codigo_b);
  printf("Nome da cidade: %s\nPopulação: %d\n", cidade_b, qtd_pop_b);
  printf("Área: %.2f km^2\nPIB: %.2f\n", area_b, pib_b);
  printf("Número de pontos turísticos: %d\n\n", n_turismo_b);

  printf("Preparado para jogar?\n");

return 0;
} 
