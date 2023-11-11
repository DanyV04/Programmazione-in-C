#include <stdio.h>
#define MAX 5
int main(){
    int arr[MAX]= {1};
    int *ptr; // deve puntare ad arr
    ptr = arr;  // se prendo arr è considerato come puntatore al primo elemento di arr
    printf("Indirizzo: %p", ptr);  // stampa l'indirizzo di memoria
    printf("\nContenuto: %d", *ptr);
    // provare un for che stampi tutti i valori dell'array
        
}


