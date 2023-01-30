#include <stdio.h>
int main(void){
    int n, i, sum=1;
    printf("Enter a number of cuts: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        sum = sum*2;
    }
    printf("The number of pieces is %d", sum);
    return 0;
}



