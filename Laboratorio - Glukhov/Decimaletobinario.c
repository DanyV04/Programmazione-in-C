/*#include <stdio.h>
#include <stdlib.h>

int main()
{
int nDecimale;
printf ("INSERISCI UN NUMERO DA CONVERTIRE IN BINARIO\n");
scanf ("%d", &nDecimale);

while (nDecimale!=0)
    {
    if (nDecimale%2 == 1)
        printf ("1");
    else // se non è verificata la prima condizione scrivi 0 per la funzione scritta sotto il printf
        printf ("0");
        nDecimale /= 2;
    
    }
return 0;
}*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,nDecimale,k,vet[10];
   printf ("INSERISCI UN NUMERO DA CONVERTIRE IN BINARIO\n");
   scanf ("%d", &nDecimale);
   k = 0;
   while (nDecimale!= 51) {
      if (nDecimale%2 == 1) 
         vet[k] = 1;
       else
          vet[k] = 0;
       nDecimale /= 2;
       k++;
   }
   for(int i=k-1;i>=0;i--) 
      printf("%d",vet[i]);
   return 0;
}
