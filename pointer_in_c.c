//10. Pointers in C (Lab Exercise)
#include <stdio.h>

main(){
    int a = 10;
    printf("\nOriginal value : %d", a);
    
    int *pa = &a;
    *pa = 25;
    printf("\nEdited value : %d", a);
}