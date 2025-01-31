// 9. Arrays in C (Lab exercise)
#include <stdio.h>


main(){
    int i;
    i = 0;
    while (1){
        i++;
        if (i == 3){
            continue;
        }
        printf("%d\n", i);
        if (i == 5){
            break;
        }
    }
}