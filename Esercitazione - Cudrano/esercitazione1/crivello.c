// Il Crivello di Erastotene

#include <stdio.h>
#define D 1000

int main()
{
    int crivello[D];
    int i, j;
    for (i = 0; i < D; i++) // inizializzazione di tutte le caselle dell'array a 1 [come da consegna]
    {
        crivello[i] = 1;
    }
    for (i = 2; i < D; i++)
    {
        for (j = i; j < D; j++)
        {
            if (j % i == 0) // si va ad impostare a 0 tutti gli elementi di un array che hanno j multiplo di i overro j % i == 0, non hanno resto
            {
                crivello[j] = 0;
            }
        }
    }
    for (int i = 3; i < D; i++)
    {
        for (int j = i; j < D; j++)
        {
            if (j % i == 0) // si inizializzano a 0 i multipli di 3, stesso procedimento effettuato prima
            {
                crivello[j] = 0;
            }
        }
    }
    // stampare i valori che rappresentaranno i numeri primi da 1 a 999
    for (int i = 1; i < D; i++)
    {
        if (crivello[i] == 1)
        {
            printf("%d", crivello[i]); // stampami i valori che nell'array ancora ancora indice 1
        }
    }

    return 0;
}
