//9. Arrays in C (Lab Exercise)
#include <stdio.h>


main(){
    printf("--------------- Matrix storing and printing program ---------------");
    int a[5];
    for (int i = 0; i < 5; i++){
        printf("\nEnter element : ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("\nElement[%d] : %d", i, a[i]);
    }
    printf("\n--------------- Matrix sum of elements program ---------------\n");
    int a1[3][3], sum = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("\nEnter Element : ");
            scanf("%d",&a1[i][j]);
        }
    }
    printf("\n--------------- Matrix ---------------\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("  %d", a1[i][j]);
            sum += a1[i][j];
        }
        printf("\n");
    }
    printf("Sum of the elements of the matrix is : %d", sum);
}
