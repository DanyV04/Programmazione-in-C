// si cerchi con una funzione che trova il minimo in un array di interi
#define MAX 8
int minimo_array(int [], int);
int main(){
    int v[MAX] = {3,8,12,5,6,4,0,22};
    int i_minimo;
    i_minimo = minimo_array(v, MAX);
}
int minimo_array(int v[], int dim){
    int min, i, i_min = 0;
    for (i = 1; i <dim; i++)
    {
        if (v[i] < v[i_min])
        {
            i_min = 1;
        } 
    }
    return i_min;  
}

int selesort(int v[], int dim)
    int i, i_min; 
    for (int i = 0; i < dim; i++)
    {
        i_min = cercamin();
    }
    