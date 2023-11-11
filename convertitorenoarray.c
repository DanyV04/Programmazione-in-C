/* #include <stdio.h>
#include <math.h>

int main(void){
    int nDecimale, resto, div, cont = 0, somma = 0;
    double pot;
    printf("Inserisci un qualsiasi numero: ");
    scanf("%d", &nDecimale);
    do
    {
        resto = nDecimale%2;  //calcola il resto della operazione
        div = nDecimale/2; //calcola la divisione
        pot= pow(10, cont);
        somma = somma + (resto*pot);
        cont+=1;
    } while (div!=0);
    printf("Il numero binario e': %d", &somma);
    return 0;
}*/

#include <stdio.h>
#include <math.h>
int main()
{
  int n, r, div, cont, som;
  double pot;
  printf("Inserisci il numero decimale da convertire: ");
  scanf("%d", &n);
  cont = 0;
  som = 0;
  do
  {
    div = n/2;
    r = n % 2; //importante prendere subito il resto e non dopo l'assegnamento
    n = div;
    pot = pow(10,cont);
    som = som + (r * pot);
    cont = cont + 1;
  }
  while(n!=0);
  printf("Il numero convertito e' %d", som);
  return 0;
}