#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter 3 integer value:");
scanf("%d,%d,%d",&a,&b,&c);
printf("The forward order:%d,%d,%d\n",a,b,c);
printf("The reverse order:%d,%d,%d",c,b,a);
getch();
}
