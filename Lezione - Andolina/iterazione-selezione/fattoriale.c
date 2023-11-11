/* Problema: Scrivi un programma in C che chieda all'utente di inserire un intero non negativo n. 
        Calcola e stampa il fattoriale di n utilizzando un ciclo che è controllato da una variabile contatore.

Dettagli: Il fattoriale di un numero n (indicato con n!) è il prodotto di tutti gli interi positivi da 1 a n. 
    Ad esempio, 5!=5×4×3×2×1=1205!=5×4×3×2×1=120.
        Assicurati che il tuo programma gestisca correttamente il caso speciale di 0!, che è definito come 1.*/


#include <stdio.h>

int main(void){
        int n1;
        int fattoriale = 1;
        printf("Inserisci un numero non negativo: ");
        scanf("%d", &n1);
        if (n1 > 0)
        {
         while (n1 > 0)
        {
                fattoriale *= n1;
                n1--; 
        } 
        printf("Fattoriale di %d e': %d\n", n1, fattoriale);
        } else
        printf("Il fattoriale non è possibile");
        if (n1 == 0)
        {
                printf("Il fattoriale e' 1");
        }
        
return 0;        
}

