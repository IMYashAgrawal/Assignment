//Write a program to insert a element at a given index

#include<stdio.h>
int main() {
    int a[10],in,n;
    for (int i = 0; i < 9; i++) {
        scanf("%d",&a[i]);
    }
    printf("Tell the index in whixh you want to insert the element: ");
    scanf("%d",&in);
    for(int i = 10; i > in; i--) {
        a[i] = a[i-1];
    }
    printf("Enter the number you want to insert: ");
    scanf("%d",&n);
    a[in] = n; 
    for (int i = 0; i < 10; i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}