//write a c program to input elements in array and save its square in the array using function
#include<stdio.h>
int sq(int);
int main()
{
    int a[5];
    printf("enter the elements");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
       int r=sq(a[i]);
        a[i]=r;
    }
    for(int i=0;i<5;i++){
        printf("%d   ",a[i]);
    }
}
int sq(int n){
    n=n*n;
    return n;
}