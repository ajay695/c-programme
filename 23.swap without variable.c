#include<stdio.h>
#include<conio.h>

     void main()
{ 
     int a, b ;
      printf("Enter a two integer value:");
      scanf("%d,%d",&a,&b);
        printf("Before swapping the value of a & b:%d,%d",a,b);
        
        a=a+b;
        b=a-b;
        a=a-b;
         printf("\nAfter swapping the value of a & b:%d,%d",a,b);
    getch();
}
      
