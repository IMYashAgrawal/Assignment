//write a c program to check whether all elements of the array are palindrome or not
#include<stdio.h>
void pal(int);
int main()
{
    int n,a[5],r;
    printf("enter the elements ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        pal(a[i]);
    }
}
void pal(int n){
    int t=n,rem,rev=0;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(t==rev){
        printf("Element of array is palindrome\n");
    }
    else {
        printf("Element of array is not palindrome");
    }
}