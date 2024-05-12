#include <stdio.h>

float valorCompra;
int tipoCliente;
float Desconto = 0;
float valorTotal = 0;
int continuar = 1;

void compras(){
        printf("1 - Funcionario\n");
        printf("2 - Cliente VIP\n");
        printf("3 - Novo Cliente\n");
        printf("Selecione o tipo de cliente: ");
        scanf("%d", &tipoCliente);

        if (tipoCliente > 3)
        {
            printf("Tipo de cliente inválido!\n");
            getchar();

            sair();
        }

        printf("Digite o valor da compra: ");
        scanf("%f", &valorCompra);
        getchar();

        if (valorCompra >= 50)
        {
            switch (tipoCliente) {
                case 1:
                    Desconto = valorCompra * 0.2;      
                    break;
                case 2:
                    Desconto = valorCompra * 0.1;
                    break;
                case 3:
                    Desconto = valorCompra * 0.05;
                    break;
            }
            valorTotal = valorCompra - Desconto;
            printf("Valor total a ser pago: %.2f\n", valorTotal);
            sair();
        }else{
            printf("Nao ha desconto aplicavel para si, \nValor total a ser pago: %.2f\n", valorCompra);
            sair();
        }
}

void sair(){
    printf("Deseja continuar? (1 - Sim, 0 - Nao): ");
    scanf("%d", &continuar);

    if (continuar == 1)
    {
        compras();
    }else{
        exit(0);
    }
}

int main() {
    compras();
}
