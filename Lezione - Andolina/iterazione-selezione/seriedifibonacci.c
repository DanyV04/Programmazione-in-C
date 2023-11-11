#include <stdio.h>

int main(void){
    int n1 = 1, OldN = 0, result = 0, cicli = 0;
    printf("Inserisci il numero di cicli che si vuole fare:");
    scanf("%d", &cicli);
    for (int i = 1; i < cicli; i++)
    {
    result = OldN + n1;
    OldN = n1;
    n1 = result;
    }
    printf("%d\t", result);
   
   
   /* do
    {
    result = OldN + n1;
    OldN = n1;
    n1 = result;
    
    } while (result >= 50);
    */
return 0;
}