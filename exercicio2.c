#include <stdio.h>
int main (){
    int casos;
    float base, altura, lado, areaRet, areaQua;
    printf ("Você deseja calcular a área de um retângulo ou quadrado?\n caso seja um retangulo, digite: 0\n caso seja um quadrado, digite: 1.\n");
    scanf ("%d", &casos);

    switch (casos){
        case 0:
        printf ("\nQual a base do seu retângulo?");
        scanf ("%f", &base);
        printf ("\nQual a altura do seu retângulo?");
        scanf ("%f", &altura);

        areaRet = base * altura;

        printf ("\nA área do seu retângulo é: %.2f metros quadrados.", areaRet);
        break;

        case 1:
        printf ("\nQual o Lado do seu quadrado? ");
        scanf ("%f", &lado);

        areaQua = lado * lado;

        printf ("\nA área do seu quadrado é: %2.f metros quadrados.", areaQua);
        break;
        default:
        printf ("\nOpção inválida. \nTente novamente!");
        break;
    }

    return 0;
}