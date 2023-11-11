#include <stdio.h>

int main()
{
    int ValIns; // numero di valori da inserire
    int count;  // numero di valori da inserire
    int total = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &ValIns);
        total += ValIns;
    }

    printf("Il risultato e': %d", total);

    return 0;
}