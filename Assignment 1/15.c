// write a c program to print fibonacci series using function
#include <stdio.h>
void fib();
int main()
{
    int n;
    printf("enter the number of terms to print: ");
    scanf("%d",&n);
    fib(n);
    return 0;
}
void fib(int n)
{
    int f=0,s=1,t;
    if(n==1){
        printf("%d",f);
    }
    else if(n==2){
        printf("%d%d",f,s);
    }
    else{
        printf("%d\n%d\n",f,s);
        for(int i=0;i<n-2;i++){
            t=f+s;
            printf("%d\n",t);
            f=s;
            s=t;
        }
    }
}