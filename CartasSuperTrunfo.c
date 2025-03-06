#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char CodUnic [20] = "G1";
    char Pais [15] = "Brasil";
    int Populacao = 1000;
    float Area = 1.8923;
    float PIB = 3.671;
    int  pontosturisticos = 71;

    printf("Bem-vindo ao cadastro de cartas! : \n");

    printf("Digite o CodUnic \n");
    scanf("%s", CodUnic);

    printf("Digite o nome do Pais \n");
    scanf("%s", Pais);


    printf("Digite a populacao : \n");
    scanf("%d", &Populacao);

    printf("Digite a Area : \n");
    scanf("%f", &Area);

    printf("Digite o PIB : \n");
    scanf("%f", &PIB);


    printf("Digite a quantidade de pontos turisticos : \n");
    scanf("%d", &pontosturisticos);

    printf("Pais : %s\n", Pais);
    printf("Populacao : %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("pontosturisticos: %d\n", pontosturisticos);

    printf("\n\n");

    /*Segunda carta após 2 espaços*/

    printf("Digite as informações da proxima carta! \n");

    printf("\n");

    printf("Digite o CodUnic \n");
    scanf("%s", CodUnic);

    printf("Digite o nome do Pais \n");
    scanf("%s", Pais);


    printf("Digite a populacao : \n");
    scanf("%d", &Populacao);

    printf("Digite a Area : \n");
    scanf("%f", &Area);

    printf("Digite o PIB : \n");
    scanf("%f", &PIB);


    printf("Digite a quantidade de pontos turisticos : \n");
    scanf("%d", &pontosturisticos);

    printf("Pais : %s\n", Pais);
    printf("Populacao : %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("pontosturisticos: %d\n", pontosturisticos);

    /*aiai*/


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
