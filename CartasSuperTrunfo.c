#include <stdio.h>

int main(){

    char Estado[3];           
    char Cidade[50];          
    int Populacao;
    float Area;
    float PIB;
    int PontoTuristico;
    float DensidadePopulacional;
    float PIBPerCapita;

    printf("ESCOLHA SEU ESTADO (SIGLA): \n");
    scanf("%2s", Estado);

    printf("ESCOLHA SUA CIDADE: \n"); 
    scanf("%20s", Cidade);

    printf("QUAL A POPULACAO DA SUA CIDADE? \n");
    scanf("%d", &Populacao);

    printf("QUAL A AREA DA SUA CIDADE? \n");
    scanf("%f", &Area);
    
    printf("QUAL O PIB DA SUA CIDADE? \n");
    scanf("%f", &PIB);

    printf("QUANTOS PONTOS TURISTICOS TEM NA SUA CIDADE? \n");
    scanf("%d", &PontoTuristico);

    DensidadePopulacional = Populacao / Area;
    PIBPerCapita = PIB / Populacao;

    printf("\n--- DADOS INFORMADOS ---\n");
    printf("ESTADO: %s\n", Estado);
    printf("CIDADE: %s", Cidade);
    printf("POPULACAO: %d\n", Populacao);
    printf("AREA: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("PONTOS TURISTICOS: %d\n", PontoTuristico);
    printf("DENSIDADE POPULACIONAL: %.2f\n", DensidadePopulacional);
    printf("PIB PER CAPITA: %.2f\n", PIBPerCapita);

    return 0;
}
