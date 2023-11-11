#include <stdio.h>
#include <math.h>

int main(){
    int r,q,y,i, count = 0;
    printf("Inserisci due valori:\n");
    scanf("%d", &q); //termine inferiore sommaT
    scanf("%d", &r); //termine superiore sommaT
        while(r>0 && q>0 && r>q)
        {
            for (int i = 0; i <r; i++)   //potrebbe essere un ciclo for con i++ che una volta preso il primo valore ripete il calcolo fino a che non raggiunge il secondo valore
            {
                y+= 1/q; //provare somma successiva che va q a r
                count++;
                printf("Risultato: %d", y);
            }
            
            
           return 0; 
        }
        
}