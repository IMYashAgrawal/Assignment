//Write a c program to find product of all elements of diagnols of a square matrix.

#include<stdio.h>
int main() {
    int a[3][3], pro = 1;
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d",&a[i][j]);
            if (i == j || i + j == 2) {
                pro = pro * a[i][j];
            }
        }
    }
    printf("%d", pro);
    return 0;
}