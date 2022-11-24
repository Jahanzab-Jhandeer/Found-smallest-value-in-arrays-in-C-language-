#include<stdio.h>

int main () {
    int array[100], num,  x, i, smallest;
    printf("how many number you want to input : ");
    scanf("%d" , &num);

    printf("input the number\n");
    for(i = 1; i <= num; i++) {
    scanf("%d" , &array[i]);
    }

    for(i = 0; i < num; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
        }
    }
    printf("smallest elemets : %d\n" , smallest);
    
}