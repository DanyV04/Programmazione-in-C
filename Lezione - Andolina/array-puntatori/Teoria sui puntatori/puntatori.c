#include <stdio.h>

//per stampare l'allocazione in memoria delle variabili

int main(){
    int a, b[10];
    printf("sizeof(a); %d\n", sizeof(a));
    printf("sizeof(b); %d\n", sizeof(b));

//per stampare l'indirizzo in memoria di un valore  -- %p è caratteristico per l'indirizzo di memoria del puntatore
   
    printf("indirizzo di a: %p\n", &a);
    printf("indirizzo di b: %p\n", b); // non serve specificare & per un array per stampare indirizzo di memoria
}


//sempre meglio indicare i puntatori riga su riga per non creare confusione sul codice
 int a;
 int *p = &a;
 int x;

 int*ptr = 0; // non punta ad alcun valore il puntatore