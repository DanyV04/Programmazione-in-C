
//BUBBLESORT con numeri randomizzato da 1 a 100

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 20

int main(){
    int vet[DIM];
    srand(time(0));
    printf("La sequenza e': ");
    for (int i = 0; i < DIM; ++i)
    {
        vet[i]=1+ rand() % 100;   //stampa valori da 1 a 100 ---> dopo %  c'è il numero max di numeri ammissibili dalla randomizzazione
        printf("%d ", vet[i]);  //provare a tabella i valori --> ciclo if con resto == 0 per mandare a capo per multipli di 4
    }
    /*printf("La sequenza inserita e': ");
    for (int j = 0; j < DIM; ++j)
    {
        printf("%4d", vet[j]);
    }*/
    for (int contr = 1; contr < DIM; ++contr)
    {
        for (int a = 0; a < DIM - 1; ++a)
        {
            if (vet[a] > vet[a + 1])
            {
                int hold = vet[a];
                vet[a] = vet[a + 1];
                vet[a + 1] = hold;
            }
            
        }
        
    }
    printf("\nLa sequenza riordinata e': ");
        for (int i = 0; i < DIM; ++i)
        {
            printf("%4d", vet[i]);
        }
return 0;
}


//trovo dove devo inserire --> shift a destra e rialloco nella posizione duplicata
