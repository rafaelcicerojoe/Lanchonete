//Link do problema original:  https://www.urionlinejudge.com.br/judge/en/problems/view/1038

#include <stdio.h>
#include <locale.h>//Incluir linguas e caracteres

//Declarações de funções
void cardapio();
float QualAConta();
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
    int chave,qtd;
    float total;

    //Chave dos produtos
    printf("Digite o codigo do produto que deseja: ");
    scanf("%d",&chave);

    //Quantidade dos produtos
    printf("Digite quantos produtos deseja: ");
    scanf("%d",&qtd);
    printf(" \n\n\n");

    switch (chave){
        case 1:
            total = 4.00*qtd;;
            break;
        case 2:
            total = 4.50*qtd;;
            break;
        case 3:
            total = 5.00*qtd;;
            break;
        case 4:
            total = 2.00*qtd;;
            break;
        case 5:
            total = 1.50*qtd;;
            break;
        default:
            total = 0;
            break;
    }

    return total;
}