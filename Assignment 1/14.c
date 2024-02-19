// Write a C program to reverse a number using funtion

#include<stdio.h>
int rev(int);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int r = rev(n);
    printf("%d",r);
    return 0;
}
int rev(int n) {
   int rev=0;
   int rem;
   while (n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}