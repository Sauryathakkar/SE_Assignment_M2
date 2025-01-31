// Looping in C (Lab exercise)
#include <stdio.h>


main(){
    int x = 1;
    while (x <= 10){
        printf("\n%d", x);
        x++;
    }
    for (x = 1; x <= 10; x++)
    {
        printf("\n%d", x);
    }
    x = 1;
    do
    {
        printf("\n%d", x);
        x++;
    } while (x <= 10);
    
    
}