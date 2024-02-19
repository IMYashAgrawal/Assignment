//Write a C program to find factorial of a number

#include<stdio.h>
int rec(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int r = rec(n);
    printf("%d",r);
    return 0;
}
int rec(int n) {
    if (n == 0 || n == 1){
        return 1;
    }
    return n * rec(n - 1);
}