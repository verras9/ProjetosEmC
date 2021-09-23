#include <stdio.h>
int main (){
    int ddd;
    
    printf ("Informe o DDD para interurbano: ");
    scanf ("%d", &ddd);

    if (ddd == 61){
        printf("DDD 61, Brasilia confirmado");
    }
    else if (ddd == 71){
        printf ("DDD 71, Salvador confirmado.");
    }
    else if (ddd == 11){
        printf ("DDD 11, Sao Paulo confirmado.");
    }
    else if (ddd == 21){
        printf ("DDD 21, Rio de Janeiro confirmado.");
    }
    else if (ddd == 32){
        printf ("DDD 32, Juiz de Fora confirmado.");
    }
    else if (ddd == 19){
        printf ("DDD 19, Campinas confirmado.");
    }
    else if (ddd == 27){
        printf ("DDD 27, Vitoria confirmado.");
    }
    else if (ddd == 31){
        printf ("DDD 31, Belo Horizonte confirmado.");
    }

    else {
        printf ("DDD nao cadastrado.");
    }
    return 0;
}