#include <stdio.h>

int main() {

    float saldo = 1000.0;  
    float valor;
    int opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Saldo atual: %.2f\n", saldo);
                break;

            case 2:
                printf("Digite o valor para depositar: ");
                scanf("%f", &valor);

                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado. Novo saldo: %.2f\n", saldo);
                } else {
                    printf("Valor invalido.\n");
                }
                break;

            case 3:
                printf("Digite o valor para sacar: ");
                scanf("%f", &valor);

                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado. Novo saldo: %.2f\n", saldo);
                } else {
                    printf("Saldo insuficiente ou valor invalido.\n");
                }
                break;

            case 0:
                printf("Encerrando o sistema...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}
