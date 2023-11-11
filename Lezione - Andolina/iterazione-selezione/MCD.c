#include <stdio.h>

int main(void){
    int a, b, minimo, mcd = 1;
    printf("Inserisci due valori di cui si vuole calcolare l'MCD: ");
    scanf("%d", &a);
    scanf("%d", &b);
    if (a<b)
    {
        minimo = a;
        printf("minimo: %d", a);
    }
    else
        minimo = b;
        printf("minimo: %d", b);
    while (minimo>0)
    {
        if (a%minimo == 0 && b%minimo==0)
        {
            mcd = minimo;
            break;
        }
        minimo--;
        
    }
    printf("\nL' M.C.D e' %d", mcd);
    return 0;

}
/*
int main(){
    printf("inserisci due numeri separati da spazio\n");
    scanf("%d%d", &a,&b);

    while(a!=b){

    }
}
*/