/*
Leggere da tastiera una sequenza di frasi e memorizzarla in un array di stringhe. 
Stampare quindi a video le frasi con un numero di parole superiore alla media.
*/


#include <stdio.h>
#include <string.h>
#define R 20 // numero di frasi
#define MAX 100 //massimo di caratteri per una frase

int main(){
    char stringhe[R][MAX + 1];  // il primo [] definirà la stringa e la seconda [] definisce il carattere
    int n_parole[R];
    int i, j;
    int flag = 1;
    int dim; // dimensione dell'array attuale
    float media;
    do{
        gets(stringhe[i]); // sto indirizzando la posizione della riga i-esima --- aka e' già un puntatore a livello effettivo
        if (strcmp(stringhe[i], '\n') == 0)
        {
            flag = 0;
        }
    i++;
    }while(flag);
    dim = i -1;

    for (i = 0; i < dim; i++)
    {
        n_parole[i] = 0,
       for (j = 0; stringhe[i][j] != '\0'; j++)
       {
         if (stringhe[i][j] == '')
         {
            n_parole[i]++;
         }
         if (j > 0)
         {
             n_parole++;
         }
       } 
    }  
    for (i = 0; i < dim; i++)
    {
        media += n_parole[i];
    }
    media /= dim;

    // se il numero di parole è maggiore della media stampo, altrimenti no
    for (i = 0; i < dim; i++)
    {
        if (n_parole[i] > media)
        {
            printf("%s\n", stringhe[i]);

        }
        
    }
    
return 0;
}