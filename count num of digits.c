#include<stdio.h>
#include<conio.h>

     void main()
{ 
     int n,count;
         
         printf("Enter a number:");
         scanf("%d",&n);
    
    for(count=0;n!=0;n/=10)
    {
        count=count+1;
    }
    
        printf("Number of digits=%d\n",count);
    getch();
}