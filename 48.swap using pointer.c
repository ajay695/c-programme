#include <stdio.h>
void swap(int*a,int*b);
int main()
{
    int a,b;
    printf("enter the 1st value and 2nd value:");
    scanf("%d%d",&a,&b);
    swap(&a, &b);
    printf("after swapping a=%d and b=%d\n",a, b);
    return 0;
}
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
