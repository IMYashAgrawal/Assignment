//Write a C program to print all the unique element of an 1-D array.

#include<stdio.h>
int main() {
    int a[5] ;
    for(int i = 0; i < 5; i++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++) {
        int n = 0;
        for (int j = 0; j < 5; j++) {
            if(a[i] == a[j] && i != j) {
                n++;
            }
        }
        if (n == 0){
            printf("%d\n",a[i]);
        }
    }
    return 0;
}