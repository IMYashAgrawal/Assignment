// Write a C program to find the transpose of the matrix

#include<stdio.h>
int main() {
    int a[3][3]; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}