//11.Strings in C
#include <stdio.h>
#include <string.h>

main(){
    char str1[20], str2[10];
    printf("\nEnter a string : ");
    scanf("%s", &str1);
    printf("\nEnter another string : ");
    scanf("%s", &str2);
    strcat(str1, str2);
    printf("\nConcatenation of the string is : %s", str1);
    printf("\nLength of the string is : %d", strlen(str1));
}