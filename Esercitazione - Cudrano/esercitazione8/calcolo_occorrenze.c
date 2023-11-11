/*
 INPUT --> inserire un array manualmente
 OUTPUT --> stampare il valore e la frequenza nel programma
*/

#include <stdio.h>
#define DIM 10
int main(){
    int in[DIM]; // input
    // strutture di supporto
    int val[DIM]; // array dei valori
    int frequenza[DIM];  // occorrenze
    int i,j,k, dim;
    int dim_val = 0; // dimensione effettiva dell'array val
    int dim_in = 0;
    int trovato;
    printf("Inserisci 10 numeri: ");
    
    for(i = 0; i < DIM; i++){
        scanf("%d", &in[i]);
        dim_in++;
    }
// in[j] e' contenuto in val?
    for (int j = 0; j < dim_in; j++)
    {
        for (int k = 0; k < dim_val; k++)
        {
          if (in[j] == val[k])
          {
            trovato = 1; // nella posizione j - 1
          }
             /* si può scrivere anche come 
              for (int k = 0; k < dim_val && val[k] != in[i]; k++)
              ;
             si deve poi fare IF con J e non J - 1
             */

        }
       if (trovato)
       {
        frequenza[j-1]++;  // aumento il valore dell'array delle frequenze nel momento in cui trovo un valore diverso per l'array
       }else{
        val[dim_val] = in[i];
        frequenza[dim_val] = 1;
        dim_val++;
       }
        
    }
    for (int b = b < dim_val; b++)
    {
        printf("%d %4d", val[i], frequenza[i]);
    }
    
}

// frequenza[j]++; // PROBLEMA ? 