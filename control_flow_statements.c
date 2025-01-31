// 5. Control Flow Statements in C (Lab Exercise)
#include <stdio.h>


main(){
    int x;
    printf("\n\tEnter a number : ");
    scanf("%d", &x);
    if (x % 2 == 0){printf("\n\t The number is Even");}
    else {printf("\n\t The number is negative");}
    int y;
    printf("\n\nEnter the month's number : ");
    scanf("%d", &y);
    switch (y)
    {
    case 1:
        printf("\nJanuary");
        break;
    case 2:
        printf("\nFebruary"); 
        break;
    case 3:
        printf("\nMarch");
        break;
    case 4:
        printf("\nApril");
        break;
    case 5:
        printf("\nMay");
        break;
    case 6:
        printf("\nJune");
        break;
    case 7:
        printf("\nJuly");
        break;
    case 8:
        printf("\nAugust");
        break;
    case 9:
        printf("\nSeptember");
        break;
    case 10:
        printf("\nOctomber");
        break;
    case 11:
        printf("\nNovember");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Invalid Input");
        break;
    }
}