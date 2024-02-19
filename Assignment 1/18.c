// write a c program to print the sum of all elements of a 2d array
#include<stdio.h>
int sum(int );
int main()
{
    int a[3][3],r;
    int s=0;
    printf("enter the elements ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            r=sum(a[i][j]);
            s=s+r;
        }
    }
    printf("%d",s);
}
int sum(int n){
   int  sum=0;
    sum=sum+n;
    return sum;
}
