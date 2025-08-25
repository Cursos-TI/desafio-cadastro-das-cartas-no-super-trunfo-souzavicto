#include <stdio.h>

int main (){
    
    char nome_estado[50],nome_estado2[50],letra_estado[1],
    letra_estado2[1], codigo[4],codigo2[4], cidade[50],cidade2[50];
    int populacao,populacao2,turistico,turistico2;
    float area,area2;
    double pib,pib2;//pib alterado de float para double para suportar o numero digitado

//coletando informações da primeira carta 
    printf("Bem vindo ao super trunfo! \n");
    printf("digite os dados da primeira carta\n");
    printf("Digite o nome do estado: ");
    scanf("%s", &nome_estado);
    printf("Digite a letra do estado de A até H: ");
    scanf("%s",&letra_estado);
    printf("Digite o codigo do estado ex: A01 até 04: ");
    scanf("%s",&codigo);    
    printf("Digite o  nome da cidade: ");
    scanf("%s",&cidade);
    printf("Digite a população da cidade: ");
    scanf("%d",&populacao);
    printf("Digite a área quadara da cidade: ");
    scanf("%f",&area);
    printf("Digite o PIB da cidade ex:599280000000 : ");
    scanf("%lf",&pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&turistico); 



    //mostrando informaçõe da primeira carta
    printf("Carta 1\n");
    printf("Estado: %s\n",nome_estado);
    printf("Letra estado: %s\n", letra_estado);
    printf("Codigo do estado %s\n",codigo);
    printf("Nome da cidade: %s \n",cidade);
    printf("População: %.2d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f de reais\n",pib);
    printf("Numero de pontos turisticos: %d\n",turistico);




    // coletando iformações da segunda carta
    printf("digite os dados da segunda carta\n");
    printf("Digite o nome do estado: ");
    scanf("%s", &nome_estado2);
    printf("Digite a letra do estado de A até H: ");
    scanf("%s",&letra_estado2);
    printf("Digite o codigo do estado ex: A01 até 04: ");
    scanf("%s",&codigo2);    
    printf("Digite o nome da cidade: ");
    scanf("%s",&cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d",&populacao2);
    printf("Digite a área quadara da ciade: ");
    scanf("%f",&area2);
    printf("Digite o PIB da cidade ex:599280000000 :  ");
    scanf("%lf",&pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&turistico2);

   


    // mostrando os dados digitados pelo usario da segunda carta
    printf("Carta 2\n");
    printf("Estado: %s\n",nome_estado2);
    printf("Letra estado: %s\n",letra_estado2);
    printf("Codigo do estado %s\n",codigo2);
    printf("Nome da cidade: %s \n",cidade2);
    printf("População: %.2d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f de reais\n",pib2);
    printf("Numero de pontos turisticos: %d\n",turistico2);


    return 0;
}
