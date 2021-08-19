#include <stdio.h>
int main(){
    float x,y,soma;
    printf("Escolha um numero: ");
    scanf("%f",&x);
    printf("Escolha outro numero: ");   
    scanf("%f",&y);
    soma = x + y;
    printf("A soma de ambos = %.2f", soma);

return 0;
}