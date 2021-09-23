#include <stdio.h>
int main (){
    int y, tempo;

    printf ("Qual a distancia do carro Y em km? ");
    scanf("%d", &y);

    tempo = y * 2;

    printf ("\nO carro se encontra a %d KM do carro X em %d minutos",y, tempo);

    //y se distancia 1km a cada 2 minutos.

    return 0;
}