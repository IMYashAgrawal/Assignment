// Write a C program to sort the 2-D array in accending order

#include <stdio.h>
int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int t;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = i; k < 3; k++) {
                for (int l = j ; l < 3; l++) {
                    if (a[i][j] > a[k][l]) {
                        t = a[i][j];
                        a[i][j] = a[k][l];
                        a[k][l] = t;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}