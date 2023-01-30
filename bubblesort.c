// Write a program to read-in numbers (integer) from keyboard and save them to an array, and then sort them ascendingly by bubble sorting method. After that, print them out

// Output
// Enter a number of array’s size for a series of numbers saving: 5
// Enter a series of numbers: 5 6 2 7 1
// After sorting, output sequence: 1 2 5 6 7

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
        printf("%d ", a[i]);
    }
    return 0;
}



