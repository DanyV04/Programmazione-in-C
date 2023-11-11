
// inserire 20 numeri tra 10 e 100, stampare il numero sse è unico -- ovvero non è stato già scritto

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 20 // dimensione dell'array

int main()
{
    int n1;           // numero appena letto
    int size = 0; // numero corrente della posizione del numero nell'array -- variabile sentinella
    int trovato = 0;
    int a[DIM];
    srand(time(0));
    for (int i = 0; i < DIM; i++)
    {
        printf("Inserisci un valore causale tra 10 e 100 (estremi inclusi): ");
        scanf("%d", &n1);

        for (int j = 0; j < size && !trovato; j++)
        {
            if (a[j] == n1)
            {                 //  se il valore è gia stato inserito -- segue questa istruzione
                trovato = 1; 
            }
        }
        if (!trovato)
        {                  // se non lo si è trovato lo si inserisce nell'array
            a[size] = n1;
            printf("%d", n1);
            size++; // aggiorno il contatore per la verifica di due valori uguali inseriti nell'array
        }
    }
    return 0;
}


// memorizzazione e poi eliminazione dei duplicati

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 20 // dimensione dell'array

int main()
{
    int n1;           // numero appena letto
    int size = 0; // numero corrente della posizione del numero nell'array -- variabile sentinella
    int trovato = 0;
    int a[DIM];
    srand(time(0));
    for (int i = 0; i < DIM; i++)
    {
        trovato = 0;
        for (int j = 0;j < i && !trovato; j++)
        {
            if (a[j] == a[i])
            {
                trovato = 1;
             }
             if (trovato) //shift a sinistra degli elementi di un array
            {
                for (int j = i+1; j < DIM; j++) // ci si sposta avanti di un valore nell'array
                {
                    v[j-1] = v[j]; // sostituzione del successivo con il precedente
                }
            // cambiamento di dimesione dell'array 
            }
            
            
        }
        

        for (int j = 0; j < size && !trovato; j++)
        {
            if (a[j] == n1)
            {                 //  se il valore è gia stato inserito -- segue questa istruzione
                trovato = 1; 
            }
        }
        if (!trovato)
        {                  // se non lo si è trovato lo si inserisce nell'array
            a[size] = n1;
            printf("%d", n1);
            size++; // aggiorno il contatore per la verifica di due valori uguali inseriti nell'array
        }
    }
}

