#include <stdio.h>

int main(){
int sum = 0; //come se fosse un totale, quindi inizializzato a 0
    for (int count = 1; count <= 99; count+=2)
    {
        sum += count;
    }
    printf("La somma e': %d\n", sum);

}