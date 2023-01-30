#include <stdio.h>
int main(void){
    int a, i, count=0;
    printf("Enter a decimal number: ");
    scanf("%d", &a);
    for(i=0; i<32; i++){
        if(a%2==1){
            count++;
        }
        a = a/2;
    }
    printf("The number of 1s is %d", count);
    return 0;
}
