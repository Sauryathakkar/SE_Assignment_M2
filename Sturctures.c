#include <stdio.h>

struct student
{
    char name[15];
    int rollnum;
    int marks[3];
};


main(){
    struct student details[3];
    for (int i = 0; i < 3; i++){
        printf("\n\n--------------- Student %d ---------------\n\n", i + 1);
        printf("\n Enter name : ");
        scanf("%s", &details[i].name);
        printf("\n Enter roll number : ");
        scanf("%d", &details[i].rollnum);
        
        for (int j = 0; j < 3; j++){
            printf("\nEnter mark of subject %d : ", j + 1);
            scanf("%d", &details[i].marks[j]);
        }
    }
    for (int i = 0; i < 3; i++){
        printf("\n\n--------------- Details of student %d ---------------\n\n", i + 1);
        printf("\nName : %s", details[i].name);
        printf("\nRoll number : %d", details[i].rollnum);
        
        for (int j = 0; j < 3; j++){
            printf("\nMark of subject %d : %d ", j + 1, details[i].marks[j]);
        }
    }
}