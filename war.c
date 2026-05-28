#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Registro de dados de entrada //
#define MAX_TERRITORIOS 5
#define TAM_STRING 100

//Definição da Struct //
struct totalTerritorio{
      char Nome[TAM_STRING];
      char Cor[TAM_STRING];
      int Tropas;
};

// Limpar o Buffer de entrada //
void limparBufferEntrada(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

// Função Pricipal (main) //
int main(){

    struct totalTerritorio elemento[MAX_TERRITORIOS];
    int totalTerritorio = 0;
    int opcao;

    // Menu //
    do {

        // Exibição para usuário das opções //
        printf("=============================\n");
        printf(" Bem vindo ao Registro Total WAR 2.0\n");
        printf("1 - Cadastrar Novo Território\n");
        printf("2 - Listar Territórios\n");
        printf("0 - Sair\n");
        printf("----------------------------------------\n");
        printf("Escolha uma Opção: ");

        // Opção do Usuário //
        if (scanf("%d", &opcao) != 1){
            opcao = -1;
        }

        limparBufferEntrada();

        //Processamento das opções//
        switch (opcao) {

        case 1: //Cadastro de Território//

            printf("===Cadastro de Novo Território===\n\n");

            if (totalTerritorio < MAX_TERRITORIOS){

                printf("Digite o Nome do Território: ");
                fgets(elemento[totalTerritorio].Nome, TAM_STRING, stdin);
                elemento[totalTerritorio].Nome[strcspn(elemento[totalTerritorio].Nome, "\n")] = 0;

                printf("Digite a Cor do exército: ");
                fgets(elemento[totalTerritorio].Cor, TAM_STRING, stdin);
                elemento[totalTerritorio].Cor[strcspn(elemento[totalTerritorio].Cor, "\n")] = 0;

                printf("Digite número de tropas: ");
                scanf("%d", &elemento[totalTerritorio].Tropas);

                limparBufferEntrada();

                totalTerritorio++;

                printf("\nTerritorio cadastrado com sucesso!\n");

            } else {

                printf("Registros Cheios! Não há mais espaço.\n");
            }

            printf("\nPressione Enter para continuar");
            getchar();
            break;

        case 2: //Lista de territórios//

            printf("\n===Territórios Cadastrados === \n\n");

            if (totalTerritorio == 0) {

                printf("Nenhum territorio cadastrado ainda.\n");

            } else {

                for (int i = 0; i < totalTerritorio; i++) {

                    printf("--------------------------------------\n");
                    printf("Território %d\n", i + 1);
                    printf("Nome: %s\n", elemento[i].Nome);
                    printf("Cor: %s\n", elemento[i].Cor);
                    printf("Tropas: %d\n", elemento[i].Tropas);
                }

                printf("----------------------------------------\n");
            }

            printf("\nPressione Enter para Continuar...");
            getchar();
            break;

        case 0: //Sair do sistema //

            printf("\nSaindo do Sistema...\n");
            break;

        default:

            printf("\nOpção Inválida! Tente novamente.\n");
            printf("\nPressione Enter para Continuar...\n");
            getchar();
            break;
        }

    } while (opcao != 0);

    return 0;
}