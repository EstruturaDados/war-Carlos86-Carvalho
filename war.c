#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Registro de dados de entrada //
#define MAX_TERRITORIOS 5
#define TAM_STRING 100

//Definição da Struct //
struct Territorio{
      char Nome[TAM_STRING];
      char Cor[TAM_STRING];
      int Tropas;
};

// Limpar o Buffer de entrada //
void limparBufferEntrada(){
    int c;
    while((c  getchar()) != 'n' && c != EOF);
}

// Função Pricipal (main) //
int main(){
    struct Territorio elemento[MAX_TERRITORIOS];
    int totalTerritorio = 0;
    int Tropas;

    // Menu //

do {


    // Exibição para usuário das opções //
    printf("=============================\n");
    printf(" Bem vindo ao Registro Total WAR 2.0\n");
    printf("1 - Digite Nome do Território\n");
    printf("2 - Escolha uma Cor para o Exército\n");
    Printf("3 - Digite o Número de Tropas\n");
    printf("0 - Sair\n");
    printf("----------------------------------------\n");
    printf("Escolha uma Opção: ");

    // Opção do Usuário //

    scanf("%d", &Tropas);
    limparBufferEntrada();

    //Processamento das Tropas//
switch (Tropas) {
    case 1: //Cadastro de Território//
       printf("===Cadastro de Nova Tropa===\n\n");

       if (TotalTropas < MAX_TERRITORIOS){
          printf("Digite o Nome do Território: ");
          fgets(Territorio[totalTerritotio].Nome, TAM_STRING, stdin);

          printf("Digite a Cor do território: ");
          fgets(Territorio[totalCor].Cor, TAM_STRING, stdin);

          printf("Digite numero de tropas: ");
          scanf("%d", &Territorio[totalTerritotio].Tropas);
          limparBufferEntrada();

          totalterritorios++;

          printf("\nTerritorio cadastrado com sucesso!\n");
        }else{
            printf("Limete de Registros alcançado!. \n");

        }
         printf("\nPrecione Enter para continuar");
         getchar();
         break;

    case 2: Lista de territorio
         printf("Nenhum território cadastrado ainda. \n");
    } else {
        for (int i = 0; i < totalTerritorio; i++){
            printf("--------------------------------------\n");
            printf("Território %d\n", i + 1);
            printf("Nome: %s\n", Territorio[i].Nome);
            printf("Cor: %s\n", Territorio[i].Cor);
            printf("Tropas: %d", Territorio[i].Tropas);
        }

        printf("----------------------------------------\n");

        printf("\n Precione Enter para Continuar...");
        getchar();
        break;

    case 0: //Sair do sistema de Cadastros //
        printf("\nSaindo do Sistema...\n");
        break;
    
    default: //Se existirem Opções inválidas //
        printf("\nOpção Inválida! Tente novamente.\n");
        printf("\nPrecione Enter para Continuar...\n");
        getchar();
        break;
    }     
    }
    return 0

