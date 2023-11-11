#include <stdio.h>
#include <math.h>
// classificazione di un triangolo in base ai lati
/*
int main(){
    float lato1, lato2, lato3; 
    printf("Inserisci i tre lati di un triangolo: ");
    scanf("%f%f%f", &lato1, &lato2, &lato3);

    if (lato1 == lato2 && lato1 == lato3 && lato2 == lato3)
    {
        printf("Il triangolo e' equilatero");
    }else{ 
        if(lato1 == lato2 || lato2 == lato3 || lato1 == lato3)
        {
            printf("Il triangolo e' isoscele");
        }else 
            printf("Il triangolo e' scaleno");
    }
    if ((lato1*lato1+ lato2*lato2 == lato3*lato3) || (lato1*lato1 + lato3*lato3 == lato2*lato2) || (lato2*lato2 + lato3*lato3 == lato1*lato1))
    {
       printf("Il triangolo e' rettangolo");
    }
    
return 0;
}
*/

 //definizione di minimo e massimo di una serie di numeri TEORICAMENTE DOVREBBE FUNZIONARE, ma non è così
 
int main(){
    int n, numero;
    int min, max;

    do{
        printf("Quanti numeri vuoi inserire: ");
        scanf("%d", &n);
    }while(n<=0);

    printf("Quanti numeri vuoi inserire");
    scanf("%d", &n);
    min = numero;
    max = numero;
    
    for (int i = 1; i <= n; i++)
    {
        printf("Inserire un numero:");
        scanf("%d", &numero);
        
        if(numero < min){
            min = numero;
        }
        if (numero > max){
            numero = max;
        }
        
    }
    printf("Il massimo e': %d \n il minimo e': %d", max, min);
return 0;  
}
