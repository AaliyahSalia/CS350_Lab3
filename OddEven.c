// It is similar as above question. And just print ascendingly sorted odd numbers first and followed by sorted even numbers 
// Output
// Enter a number of array’s size for a series of numbers saving: 5
// Enter a series of numbers: 5 6 2 7 1
// After sorting, output sequence: 1 5 7 2 6 

#include <stdio.h>

int main(void){
    int a[5], i, j, temp;
    printf("enter 5 numbers: \n");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0; i<5; i++){
        if(a[i]%2==1){
            printf("%d ", a[i]);
        }
    }
    for(i=0; i<5; i++){
        if(a[i]%2==0){
            printf("%d ", a[i]);
        }
    }
    return 0;
}
