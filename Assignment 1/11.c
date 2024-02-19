// Write a c program to find the sum of n number using recurssion

#include<stdio.h>
int rec(int);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int r = rec(n);
    printf("%d",r);
    return 0;
}
int rec(int n) {
    if (n == 0) {
        return 0;
    } 
    return n + rec(n - 1);
}