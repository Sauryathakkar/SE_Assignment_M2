// 4.Operators in C (Lab Exercise)
#include <stdio.h>


main(){
    int x, y;
    printf("Enter a value for Num1 : ");
    scanf("%d", &x);
    printf("Enter a value for Num2 : ");
    scanf("%d", &y);
    printf("Arithmetic Operators\n");
    printf("------------------------------------------\n");
    printf("Num1 + Num2 = %d\n", x + y);
    printf("Num1 - Num2 = %d\n", x - y);
    printf("Num1 * Num2 = %d\n", x * y);
    printf("Num1 / Num2 = %d\n", x / y);
    printf("\nLogical Operators\n");
    printf("------------------------------------------\n");
    printf("Num1 AND Num2 = %d\n", x && y);
    printf("Num1 OR Num2 = %d\n", x || y);
    printf("NOT(Num1) = %d\n", !x);
    printf("\nRelational Operators\n");
    printf("------------------------------------------\n");
    printf("Num1 == Num2 : %d\n", x == y);
    printf("Num1 != Num2 : %d\n", x != y);
    printf("Num1 > Num2 : %d\n", x > y);
    printf("Num1 < Num2 : %d\n", x < y);
    printf("Num1 >= Num2 : %d\n", x >= y);
    printf("Num1 <= Num2 : %d\n", x <= y);
}