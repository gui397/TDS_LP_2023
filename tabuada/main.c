#include <stdio.h>

int main(){

    int resultados[11];
    int totalDaSoma = 0;

    // for(int i = 0; i<=10; 1++){
    //     resultado{i} = 0;
    // }


    // primeiro for é responsavel por criaro total de tabuadas 
    for (int i = 1; i <=10; i++){

        resultados[i] = 0;
    
        // segundo for é responsavel por criar o total de tabuadas individualmente
        for(int j = 1; j <= 10; j++){
            // calcula total por tabuada 
            resultados[i] = resultados[i] + (i*j);
            totalDaSoma = totalDaSoma + (i*j);
            //calcula o total de todas as tabuadas;
            printf("\n %d X %d = %d", i, j, (i*j));
        }
    
        printf("\n - - RESULTADO TOTAL DA TABUADA %d: (%d) ", i, resultados[i]);
    }

    printf("\n O TOTAL DA SOMA DAS TABUADAS hE: %d \n", totalDaSoma);

    return 0;
}