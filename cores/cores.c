#include <stdio.h>

int main(){
    //Quantidade vetores seram é colocado no [] na variavel
    //Isso armazena e consome memória
    //Utilização de ponteiros de forma dinamina
    //Não pode colocar mais do que a memória
    char cores[3];


    // posição de cada vetor []
    cores[0]= 'A';
    cores[1]= 'B';
    cores[2]= 'C';
    printf("O valo da posicao 0 eh: %c\n, cores[0]");
    printf("Vetores!\n");
    /*              Forma de repetição             */


    /* Do - While */
    do{
        printf("Do while\n");
    } while( 0 == 1);


    /*   While     */
    while ( 0 == 1){
        printf("While\n");
    }
    /*  For   */
    // i++ valeu mesma coisa que i = i +1
    // for  percorre o vetor de cores
    for(int i = 0; 1<=2; i +1){
        printf("O valor do i eh %d\n, i");
    }


    return 0;
}
