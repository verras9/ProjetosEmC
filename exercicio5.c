#include <stdio.h>
#include <math.h>
int main (){
    float x1, x2, y1, y2, distancia;

    printf ("informe o valor de X do primeiro ponto");
    scanf ("%f",&x1);

    printf ("\ninforme o valor de Y do primeiro ponto");
    scanf ("%f",&y1);

    printf ("\ninforme o valor de X do segundo ponto");
    scanf ("%f",&x2);

    printf ("\ninfrome o valor de Y do segundo ponto");
    scanf ("%f",&y2);

    distancia = sqrt(pow((x2-x1),2) + pow((y2 - y1),2));

    printf ("\nA distância entre ponto um e ponto dois é: %4.f ", distancia);

    return 0;
}