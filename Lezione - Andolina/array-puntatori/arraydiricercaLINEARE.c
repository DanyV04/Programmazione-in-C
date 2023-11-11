#include <stdio.h>
#include <stdlib.h>
#define DIM 10
int main(){
    int vet[DIM] = {0};
    int valR = 0; //valore che si vuole ricercare
    int count = 0;
    int posizione = 0;

    for (int i = 0; i < DIM; ++i)
    {
       vet[i] = i;
    }
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &valR);
    for (int i = 0; i < DIM; ++i)
    {
        if (vet[i] == valR)
        {
            count++;
        }
        
    }
    if (count > 0 )
    {
        printf("Il valore e' presente nell'array ");
    }else{
        printf("Il valore non e' presente nell'array");
    }

 return 0;
}