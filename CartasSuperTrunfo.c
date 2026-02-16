#include <stdio.h>

int main(){

    char Estado[3];           
    char Cidade[50];          
    int Populacao;
    float Area;
    float PIB;
    int PontoTuristico;

    printf("ESCOLHA SEU ESTADO (SIGLA): \n");
    scanf("%2s", Estado);

    printf("ESCOLHA SUA CIDADE: \n");
    getchar(); 
    fgets(Cidade, sizeof(Cidade), stdin);

    printf("QUAL A POPULACAO DA SUA CIDADE? \n");
    scanf("%d", &Populacao);

    printf("QUAL A AREA DA SUA CIDADE? \n");
    scanf("%f", &Area);
    char buffer[50];
    getchar();
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &Area);

    printf("QUAL O PIB DA SUA CIDADE? \n");
    scanf("%f", &PIB);

    printf("QUANTOS PONTOS TURISTICOS TEM NA SUA CIDADE? \n");
    scanf("%d", &PontoTuristico);

    printf("\n--- DADOS INFORMADOS ---\n");
    printf("ESTADO: %s\n", Estado);
    printf("CIDADE: %s", Cidade);
    printf("POPULACAO: %d\n", Populacao);
    printf("AREA: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("PONTOS TURISTICOS: %d\n", PontoTuristico);

    return 0;
}

