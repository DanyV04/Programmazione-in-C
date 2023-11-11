//disegnare il triangolo di tartaglia

#include <stdio.h>

int main(){
    int n1, i, j, N, a[N][N];
    do
    {
        printf("Inserisci il numero di righe: ");
        scanf("%d", &n1);
    } while ( n1 >= N  || n1 < 1 );

 //inizializzare la prima riga
    a[0][0] = 1;
    for (int i = 0; i < n1; ++i)
    {
        a[0][i] = 0;  
    }

//altre righe
    for (int j = 1; j < n1; ++j)
        {
            a[j][0] = 1;
            for (int k = 1; k < n1 ; ++k)
            {
                a[j][k] = a[j-1][k-1] + a[j-1][k];
            }
            
        }
    

return 0;
}
}