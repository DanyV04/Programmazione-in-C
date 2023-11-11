#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 13

int main()
{
   int dado1;
   int dado2;
   int frequenza[DIM] = {0};
   int somma = 0;
   srand(time(NULL));
   for (int i = 0; i < 30; i++)
   {
   dado1 = 1 + rand() % 6;
   dado2 = 1 + rand() % 6;
   somma = dado1 +dado2;
   frequenza[somma]++;
   }
   printf("Somma\t Frequenza\n");
   for (int j = 2; j < 12; j++)
   {
      printf("%d\t %d\n",j, frequenza[j]);
   }

return 0;
}   