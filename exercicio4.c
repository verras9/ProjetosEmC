#include <stdio.h>
int main(){
    int caso;
    float cachorro, xsalada, xbacon, torrada, refri, quant1, quant2, quant3, quant4, quant5;

    cachorro = 4;
    xsalada = 4.5;
    xbacon = 5;
    torrada = 2;
    refri = 1.5;
    
    printf ("O que deseja consumir?\n1- Cachorro Quente\n2- X-Salada\n3- X-Bacon\n4- Torrada simples\n5-Refrigerante\n\n");
    scanf ("%d",&caso);

    switch (caso){

        case 1:
        printf ("\nQuantos cachorros quentes você deseja? ");
        scanf ("%f", &quant1);
        printf ("\nVocê escolheu %.2f cachorro quente.\nValor = %2.f R$",quant1, quant1 * cachorro);
        break;

        case 2:
        printf ("\nQuantos x-saladas você deseja? ");
        scanf ("%f", &quant2);
        printf ("\nVocê escolheu %.2f x-saladas. \nValor= %2.f R$", quant2, quant2 * xsalada);
        break;

        case 3:
        printf ("\nQuantos x-bacon você deseja? ");
        scanf ("%f", &quant3);
        printf ("\nVocê escolheu %.2f x-bacons. \nValor= %2.f R$", quant3, quant3 * xbacon);
        break;

        case 4:
        printf ("\nQuantas torradas simples você deseja? ");
        scanf ("%f", &quant4);
        printf ("\nVocê escolheu %.2f Torradas simples. \nValor= %2.f R$", quant4, quant4 * torrada);
        break;

        case 5:
        printf ("\nQuantos refrigerantes você deseja? ");
        scanf ("%f", &quant5);
        printf ("\nVocê escolheu %.2f refrigererantes. \nValor= %2.f R$", quant5, quant5 * refri);
        break;
        
        default:
        printf ("\nOpção inválida, tente novamente. ");
        break;
    }
    return 0;
}