//Link do problema original:  https://www.urionlinejudge.com.br/judge/en/problems/view/1038

#include <stdio.h>
#include <locale.h>//Incluir linguas e caracteres

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

int main(){
    setlocale(LC_ALL, "Portuguese");//setlocale(LC_ALL,"Nome da lingua") -- Serve para adapatar a lingua e caracteres

    int ctrl = 0;
    while(ctrl == 0){
        cardapio();

        int x,y;
        float total;

        printf("Digite o codigo do produto que deseja: ");
        scanf("%d",&x);

        printf("Digite quantos produtos deseja: ");
        scanf("%d",&y);
        printf(" \n\n\n");

        switch (x){
            case 1:
                total=4.00*y;printf("O Total é: R$ %.2f\n\n\n",total);
                break;
            case 2:
                total=4.50*y;printf("O Total é: R$ %.2f\n\n\n",total);
                break;
            case 3:
                total=5.00*y;printf("O Total é: R$ %.2f\n\n\n",total);
                break;
            case 4:
                total=2.00*y;printf("O Total é: R$ %.2f\n\n\n",total);
                break;
            case 5:
                total=1.50*y;printf("O Total é: R$ %.2f\n\n\n",total);
                break;
        }
        printf("Continuar pedindo? [0]Sim   [1]Nao\nResposta: ");
        scanf("%d",&ctrl);
    }
}
