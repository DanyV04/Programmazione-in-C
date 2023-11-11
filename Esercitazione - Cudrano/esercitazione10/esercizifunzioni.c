#include <stdio.h>
        
int ritorno_valore();

int main()
{
    int n;
    n = ritorno_valore(0,100);  // 0 e 100 sono i minimi e massimi della funzione 
return 0;
}
     // prima funzione -- range di definizione
int ritorno_valore(int min, int max)
{
    int n;
    do
    {
        printf("Inserisci un valore intero");
        scanf("%d", &n);
        if (n<min || n>max)
        {
            printf("Il valore %d non e' compreso nel range\n", n);
        }    
    } while (n<min || n>max);
    return n;
}
    
    // seconda funzione -- stampa array a video
void stampa_array(int [], int);
void stampa_array(int v[], int dim){
    int i;
    for (i = 0; i < dim; i++)
    {
        printf("%d\t", v[i]);
    }
//quando lavoro con stringhe non necessito di un INT DIM, perchè il terminatore ci dice la dimensione effettiva dell'array
}

    //terza funzione -- lettura data
typedef data_t  // si usa una struct
data_t leggi_data();
leggi_data(){
data_t d;
scanf();
// ..... si fanno cose
return 0;
}

    // quarta funzione 
