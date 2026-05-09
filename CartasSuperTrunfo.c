#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//Informações da carta 1
    char estado[50];
    int populacao;
    char codigoCarta[50];
    char cidade[50];
    float km;
    float PIB;
    int pontosTuristicos;

//Informações da Carta 2
    char estadoSegundo[50];
    int populacaoSegundo;
    char codigoCartaSegundo[50];
    char cidadeSegundo[50];
    float kmSegundo;
    float PIBSegundo;
    int pontosTuristicosSegundo;
  // Área para entrada de dados
//Carta 1
printf("Olá, bem vindo ao Super Trunfo. \nDigite a sua primeira carta!!\n");

//Estado
printf("Qual o nome do Estado?\n");
scanf("%s", estado);


//Código da Carta 
printf("Escolha o código da carta com a letra do Estado seguida de um número de 01 a 04. EX.: RN01, P02\n");
scanf("%s", codigoCarta);

//Cidade
printf("Qual a cidade do Estado?\n");
scanf("%s", cidade);

//População
printf("Qual o tamanho da população do Estado?\n");
scanf("%d", &populacao);

//Área(KM²)
printf("A área tem quantos KM²?\n");
scanf("%f", &km);

//PIB
printf("Qual o Produto Interno Bruto (PIB) do Estado?\n");
scanf("%f", &PIB);

//Pontos Turísticos
printf("Quantos pontos turísticos existem na cidade?\n");
scanf("%d", &pontosTuristicos);

printf("\n#################################\n");
printf("#        NOVA PERGUNTA         #\n");
printf("#################################\n\n");

//Carta 2
printf("Agora que já temos uma carta precisamos de mais uma.\nDigite a sua segunda carta aqui abaixo!!\n");

//Estado
printf("Qual o nome do Estado?\n");
scanf("%s", estadoSegundo);


//Código da Carta 
printf("Escolha o código da carta com a letra do Estado seguida de um número de 01 a 04. EX.: RN01, P02\n");
scanf("%s", codigoCartaSegundo);

//Cidade
printf("Qual a cidade do Estado?\n");
scanf("%s", cidadeSegundo);

//População
printf("Qual o tamanho da população do Estado?\n");
scanf("%d", &populacaoSegundo);

//Área(KM²)
printf("A área tem quantos KM²?\n");
scanf("%f", &kmSegundo);

//PIB
printf("Qual o Produto Interno Bruto (PIB) do Estado?\n");
scanf("%f", &PIBSegundo);

//Pontos Turísticos
printf("Quantos pontos turísticos existem na cidade?\n");
scanf("%d", &pontosTuristicosSegundo);
  // Área para exibição dos dados da cidade


//Resposta Carta 1
printf("\n========== CARTA 1 ==========\n");
printf("Sua PRIMEIRA carta foi:\nFoi o Estado de: %s\n", estado);
printf("Sua cidade é: %s\n", cidade);
printf("O código da carta foi: %s\n", codigoCarta);
printf("Sua população é de: %d de habitantes\n", populacao);
printf("A área tem %.2f Km²\n", km);
printf("O Produto Interno Bruto de %s, sendo %.2f.\n", estado, PIB);
printf("Com aproximadamente: %d pontos turísticos.\n", pontosTuristicos);
//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------
//Resposta Carta 2
printf("\n========== CARTA 2 ==========\n");
printf("Sua Segunda carta foi:\nFoi o Estado de: %s\n", estadoSegundo);
printf("Sua cidade é: %s\n", cidade);
printf("O código da carta foi: %s\n", codigoCartaSegundo);
printf("Sua população é de: %d de habitantes\n", populacaoSegundo);
printf("A área tem %.2f Km²\n", kmSegundo);
printf("O Produto Interno Bruto de %s, sendo %.2f.\n", estadoSegundo, PIBSegundo);
printf("Com aproximadamente: %d pontos turísticos.\n", pontosTuristicosSegundo);


return 0;
} 
