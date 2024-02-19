//Write a program to delete a element at a given index

#include<stdio.h>
int main() {
    int a[10],in;
    for (int i = 0; i < 10; i++) {
        scanf("%d",&a[i]);
    }
    printf("Tell the index in whixh you want to delete the element: ");
    scanf("%d",&in);
    for(int i = in; i < 9; i++) {
        a[i] = a[i+1];
    }
    for (int i = 0; i < 9; i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}