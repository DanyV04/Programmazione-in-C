//Calcolare il valore di PI = 3,14...   in base alla serie infinita data
// Stamparne una tabella POI

#include <stdio.h>

int main(){
    int n1; //numero di cicli da inserire per stampare correttamente PI
    double pi = 0.0; //valore più grande che vogliamo che assuma
   printf("Inserire la precisione del numero PI: ");
   scanf("%d", &n1);
   for (int i = 0; i < n1; i++) // calcola il numero PI con la precisione scelta
   {
     if ( i % 2 == 0) // se l'indice è pari calcola per NUM POSITIVO -- se no calcolo per NUM NEGATIVO
     {
        pi += 4.0 / (2 * i + 1);
     }else{
        pi -= 4.0 / (2 * i +1);
     }
     
   }
   printf("Il numero PI e' precisamente %lf", pi);
        


}