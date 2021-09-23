#include <stdio.h>
int main (){
    int d, pt, pt2, pt3;

    printf ("Qual a distância do robô? (centimetros) ");
    scanf ("%d",&d);
    
    if (d <= 800){
        printf ("\nSeu robô fez 1 ponto.");
    }
    else if (d <= 1400){;
        printf ("\nSeu robô fez 2 pontos.");
    }
    else if (d <= 2000){
        printf ("\nSeu robô fez 2 pontos.");
    }
    else {
        printf ("\nDistância inválida.");
    }
    return 0;
}