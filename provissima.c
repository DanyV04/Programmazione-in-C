#include <stdio.h>

int main() {
    int counter = 2;
    do
    {
        counter += 2;
        if (counter % 2 == 0)
        {
            printf("%d\n", counter);
        }
        
    } while (counter < 100);
    
}