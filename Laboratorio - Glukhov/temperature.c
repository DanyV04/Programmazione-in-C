#include <stdio.h>
#define MAX 7
// cambiare da int a float per poter prendere tutti i valori possibili
int main()
{
    int temp[MAX];                             // array che contiene le temperature registrate in 7 giorni
    int somma = 0, massima = 0, minima = 1000; // inizializzate massima, minima e media
    int media = 0;
    int count = 7;                // numero di inserimenti possibili nell'array
    
    for (int i = 0; i < MAX; i++) // inserimento e salvataggio degli elementi in un array
    {
        printf("Inserisci una temperatura: ");
        scanf("%d", &temp[i]);

        if (temp[i]> massima) // impostare MASSIMA e MINIMA a seconda dei valori che vengono inseriti
        {
            massima = temp[i]; // aggiornamento dei valori
        }
        if (temp[i] < minima)
        {
            minima = temp[i]; 
        } 
    }
    
    for (int k = 0; k < MAX; k++) // calcolo della media per INT
    {
        somma += temp[k];
    }
    media = somma / count;

    printf("GIORNO  VALORE  ISTOGRAMMA");
    for( int b = 0; b < MAX; b++){              // stampa il giorno e il valore di temperatura
        printf("\n%6d  %6d", b, temp[b]);
        for(int c = 0; c < temp[b]; ++c)    //pre-incremento per far si che il for per gli asterischi funzioni
    {
        printf("*");
    }
    }
    
    
 // come stampare asterischi per un certo range di valore ??? bisogna lavorare con l'int (perchè ragiona per difetto) e fare i print di asterischi necessari
 // come impostare la tabella


   printf("\nLa media e': %d\tLa massima e': %d\tLa minima e': %d", media, massima, minima);

return 0;
}