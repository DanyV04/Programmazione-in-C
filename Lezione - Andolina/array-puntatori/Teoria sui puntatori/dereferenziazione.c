#include <stdio.h>
/*
int main(){
    int  var = 5;
    int *p = &var; //variabile puntatore a intero

    printf("punt: %p\n", p);
    printf("punt: %d\n", *p);
    (*p)++; //incrementando il val di +1 -- da valore 5 si passa a valore 6
    //incrementato il valore della variabile VAR attraverso il puntatore *p
    printf("var: %d\n", var); 
return 0;
}
*/

int main(){
    int  var;
    int *p = &var;
    printf("punt: %p\n", p);
    printf("punt: %d\n", *p);
    (*p)++;
}

int *p;
int i = 5, j = 9;
p = &j; //assegna l'indirizzo di j -- a p viene assegnato l'indirizzo di j 

*p = i; // il valore a cui punta p diventa uguale a I  --- j = i --> j = 5 
++i; // incrementa -- valore 6 --> j = 6 

i = *p; // i uguagliato al valore a cui punta P --> i = j = 5
(*p)++; // incrementare valore a cui punta il puntatore -- da 5 a 6  --> j = 6  
p = &i; //assegna  l'indirizzo di i  [ p è l'indirizzo di j A]
*p = j; // i = j [ * --> vai a prendere la variabile a cui punta p]
