#include <stdio.h>
#define DIM 70
        //divisione contigua a metà di un array fino al ritrovamento del valore indicato
int main(){
    int vet[DIM];
    int valR; //valore di ricerca nell'array
    int inizio = 0 , centro , fine= DIM -1;
    if (valR < 0 || valR > DIM)
    {
        printf("Il valore di ricerca non e' nell'array");
    }

    
    //codice da capire 
    
    /*for (int i = 0; i < DIM; i++)
    {
        vet[i] = i;
    }
    printf("Inserisci il valore da ricercare [1-69]: ");
    scanf("%d", &valR);

    for (int j = 0; j < DIM; j++)
    {
        if (valR < middle)
        {
            high = middle;
            for (int i = 0; i < middle; i++)
            {
                if(vet[i] == valR){
                    printf("La ricerca ha avuto successo");
                }   
            }
        }
        if (valR > middle)
        {
            low = middle;
            middle= high;
            
            for (int j = 0; j < high; j++)
            {
               if(vet[j] == valR){
                    printf("La ricerca ha avuto successo");
                }   
            }
            
        } 
    }
    if (valR != DIM)
    {
        printf("Il numero non e' nell'array");
    }
    
return 0;
}*/

//non funziona, ma è uno schema plausibile di programma