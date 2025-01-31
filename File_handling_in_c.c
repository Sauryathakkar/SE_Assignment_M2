//12. FIle handling in C 
#include <stdio.h>

main(){
    FILE *fptr;
    char data[100];
    fptr = fopen("File Handling Assignment.txt", "w");
    printf("\nEnter data to write into the file : ");
    gets(data);
    fputs(data, fptr);
    fclose(fptr);
    fptr = fopen("FIle Handling Assignment.txt", "r");
    char data_r[100];
    while (fgets(data, 100, fptr) != NULL){
        printf("\n%s", data);
    }
}