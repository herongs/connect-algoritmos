#include <stdio.h>
#include <stdlib.h>

/*A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos p�es e broas (juntos), e quanto deve guardar numa conta de poupan�a (10% do total arrecadado). Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo
*/
int main()
{
    float calcPaes,calcBroas,quantPaes,quantBroas,calcTotal,calcPoup;

    printf("Ola, como foi seu dia?\n");
    printf("Vamos ao calculo dos lucros...\n");
    system("pause");

    printf("Qual foi a quantidade de paes vendidos no dia?...\n");
    scanf("%f", &quantPaes);
    printf("Qual foi a quantidade de broas vendidas no dia?\n");
    scanf("%f", &quantBroas);

    calcPaes = quantPaes*0.12;
    calcBroas = quantBroas*1.50;

    calcTotal = calcPaes + calcBroas;
    calcPoup = calcTotal * 0.10;

    printf("Valor total arrecadado no dia: %.2f \n",calcTotal);
    printf("Valor guardado na poupanca: %.2f",calcPoup);

    return 0;
}

