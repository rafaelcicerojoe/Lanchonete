//Link do problema original:  https://www.urionlinejudge.com.br/judge/en/problems/view/1038

#include <stdio.h>
#include <locale.h>//Incluir linguas e caracteres

//Declarações de funções
void cardapio();
float QualAConta();
int formaDePg();
void msgCred(float t);
//Declarações de funções

//Função Main
int main(){
    setlocale(LC_ALL, "Portuguese");//setlocale(LC_ALL,"Nome da lingua") -- Serve para adapatar a lingua e caracteres

    int menu = 0;
    while(menu == 0){
        // if windows {system("cls")} else {system("clear")}
        system("cls");
        cardapio();
        float total = QualAConta();
        printf("[Seu pedido custa ~> %.2f]\n", total);
        system("pause");
        printf("Continuar pedindo? [0]Sim   [1]Nao\nResposta: ");
        scanf("%d", &menu);
    }
}

// Nesta loja vende-se comidas

void cardapio(){ // printa o cardapio
    printf(" \n\n\n");
    printf("        |-----------------------|\n");
    printf("        | 1 - Hot Dog - RS 4,00 |\n");
    printf("        | 2 - X-Salada- RS 4,50 |\n");
    printf("        | 3 - X-Bacon - RS 5,00 |\n");
    printf("        | 4 - Torrada - RS 2,00 |\n");
    printf("        | 5 - Refri   - RS 1,50 |\n");
    printf("        |-----------------------|\n\n\n");
}

//Função para gerar o valor total da compra
float QualAConta(){
    int chave,qtd,forma;//i
    float total;

    //Chave dos produtos
    printf("Digite o codigo do produto que deseja: ");
    scanf("%d",&chave);

    //Quantidade dos produtos
    printf("Digite quantos produtos deseja: ");
    scanf("%d",&qtd);
    printf(" \n\n\n");

    printf("Escolha a forma de pagamento");//i
    forma = formaDePg();

    switch (chave){
        case 1:
            total = 4.00*qtd;;
            if(forma == 3){
                msgCred(total);
            }
            break;
        case 2:
            total = 4.50*qtd;;
            if(forma == 3){
                msgCred(total);
            }
            break;
        case 3:
            total = 5.00*qtd;;
            if(forma == 3){
                msgCred(total);
            }
            break;
        case 4:
            total = 2.00*qtd;;
            if(forma == 3){
                msgCred(total);
            }
            break;
        case 5:
            total = 1.50*qtd;;
            if(forma == 3){
                msgCred(total);
            }
            break;
        default:
            total = 0;
            break;
    }

    return total;
}

int formaDePg(){
    printf("[1]Dinheiro || [2]Debito || [3]Credito || [4]ticket\n");
    printf("Informe a forma de pagamento:");
    int opt,times;
    scanf("%d",&opt);
    switch(opt){
        case 1:
            printf("dinheiro\n");
            return 1;
            break;
        case 2:
            printf("debito\n");
            return 2;
            break;
        case 3:
            printf("credito\n");
            return 3;
            break;
        case 4:
            printf("ticket\n");
            return 4;
            break;
        default:
            printf("fiado\n");
            return -1;
            break;
    }


}
void msgCred(float total){
    float times;
    printf("quantas vezes:[1x-5x]:");
    scanf("%f",&times);
    float valor = total/times;
    printf("parcelas de %.2f",valor);
}



    
    
