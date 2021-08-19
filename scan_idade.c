#include <stdio.h>
    int main(){
        int idade;
        printf (" Quantos anos voce tem? ");
        scanf ( "%d",&idade);
        if (idade<18){
            printf ("Infelizmente você não tem a idade recomendada :(");
        } else {
             printf ("Parabéns, você é maior de idade! :)");
        } 
        



    return 0;   
}