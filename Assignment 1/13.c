// Write a C program to find the sum of the digits of the number

#include<stdio.h>
int sum(int);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int s = sum(n);
    printf("%d",s);
    return 0;
}
int sum(int n) {
    if (n <= 9) {
        return n;
    }
    return n % 10 + sum(n / 10);
}