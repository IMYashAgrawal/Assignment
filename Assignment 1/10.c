// Write a C program to find the largest and smallest number in the 2-D array

#include<stdio.h>
int main() {
    int a[3][3],max,min;
    for (int i = 0; i < 3; i++) {
        for (int j = 0 ; j < 3; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    max = min = a[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    printf("Min: %d\n",min);
    printf("Max: %d\n",max);
    return 0;
}