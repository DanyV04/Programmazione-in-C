
// Filtro media mobile --> viene utilizzato all'interno dei programmi di photo editing per ritoccare foto con rumore, o altri tipi
// disturbi presenti nella foto

#include <stdio.h>
#define R 5
#define C 7
int main()
{
    int in[R][C]; // matrice  -- righe -- colonne
    int i, j;     // indici per scorrere matrici
    int k, h;     // indici di scorrimento
    int out[R][C];
    out[i][j] = 0;

    // inizializzare la matrice FARLO IN AUTONOMIA

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            for (k = -1; k <= 1; k++) // posizione precedente a i
            {
                if (i + k >= 0 && i + k <= R && j + h >= 0 && j + h <= C)
                {
                    for (k = 1; h <= 1; h++) // posizione precedente a j
                    {
                        out[i][j] += in[i + k][j + h]; // quando abbiamo += guardare se le variabili sono inizializzate --- devono essere minori di R e C e minori
                    }
                }
            }
        out[i][j] /= 9;
        }
    }
//stampare risultato
}
