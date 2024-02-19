//Write a C program to find sum of each row of the matrix

#include<stdio.h>
int main() {
    int a[3][3],sum;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 3; j++) {
            sum = sum + a[i][j];
        }
        printf("%d\n",sum);
    }
}