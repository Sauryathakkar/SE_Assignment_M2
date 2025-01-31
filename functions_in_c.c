//8. Functions in C (Lab Exercise)
#include <stdio.h>

int fact(int);


main(){
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    int ans = fact(num);
    printf("\nFactorial of %d = %d", num, ans);
}

int fact(int n){
    int ans = 1, n1;
    n1 = n;
    while (ans < n1){
        n *= ans;
        ans += 1;
    }
    return n;
}