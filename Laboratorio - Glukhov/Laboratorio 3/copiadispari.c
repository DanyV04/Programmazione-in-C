#include <stdio.h>
#define N 3
int main(){
    int mat1[N][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int mat2[N][N] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int x = 0, y = 0;  // indici del secondo array per il movimento
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
          if (mat1[i][j] % 2 != 0)
          {
            mat2[x][y] = mat1[i][j];
            y++;         // stiamo incrementando x e y in funzione dell'if principale 
            if( y >= N){
                y = 0;
                x++;
            }
          }    
        }    
    }  
    
    // stampa dell'array
	for( int a = 0; a < N; a++){
		for(int b = 0; b < N; b++){
			printf("%d\t", mat2[a][b]);
	}
	printf("\n"); // manda a capo
	} 
}