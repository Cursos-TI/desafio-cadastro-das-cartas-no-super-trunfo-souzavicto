// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 #include <stdio.h>

int main (){
    
    char estado[1],estado2[1], codigo[4],codigo2[4], cidade[50],cidade_s[50],cidade2[50],cidade2_s[50];
    int populacao,populacao2,turistico,turistico2;
    float area,area2,pib,pib2;


//sequência de printf e scanf para ler os dados das cartas 
    printf("Bem vindo ao super trunfo! \n");
    printf("digite os dados da primeira carta\n");
    printf("Digite a letra do estado de A até H: ");
    scanf("%s",&estado);
    printf("Digite o codigo do estado ex: A01 até 04: ");
    scanf("%s",&codigo); 
    printf("Digite apenas o primeiro nome da cidade: ");  
    scanf("%s", &cidade);     
    printf("Digite o segundo nome da cidade: ");
    scanf("%s",&cidade_s); 
    printf("Digite a população da cidade: ");
    scanf("%d",&populacao);
    printf("Digite a área quadara da ciade: ");
    scanf("%f",&area);
    printf("Digite o PIB da cidade: ");
    scanf("%f",&pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&turistico);      


    printf("digite os dados da segunda carta\n");
    printf("Digite a letra do estado de A até H: ");
    scanf("%s",&estado2);
    printf("Digite o codigo do estado ex: A01 até 04: ");
    scanf("%s",&codigo2);    
    printf("Digite o primeiro nome da cidade: ");
    scanf("%s",&cidade2);
    printf("Digite o segundo nome da cidade: ");
    scanf("%s",&cidade2_s);
    printf("Digite a população da cidade: ");
    scanf("%d",&populacao2);
    printf("Digite a área quadara da ciade: ");
    scanf("%f",&area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f",&pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&turistico2);

    // mostrando os dados digitados pelo usario
    printf("Carta 1\n");
    printf("Estado %s\n",estado);
    printf("Codigo do estado %s\n",codigo);
    printf("Nome da cidade: %s %s\n",cidade,cidade_s);
    printf("População: %.2d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f de reais\n",pib);
    printf("Numero de pontos turisticos: %d\n",turistico);
    

    printf("Carta 2\n");
    printf("Estado %s\n",estado2);
    printf("Codigo do estado %s\n",codigo2);
    printf("Nome da cidade: %s %s\n",cidade2,cidade2_s);
    printf("População: %.2d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f de reais\n",pib2);
    printf("Numero de pontos turisticos: %d\n",turistico2);

    return 0;
}
