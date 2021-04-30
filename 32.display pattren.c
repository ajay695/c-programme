#include<stdio.h>
#include<conio.h>
     void main()
{
    int row,c,n=6;
    for(row=1;row<=n;row++)
    {
        for(c=1;c<=n-row;c++)
          printf("");
          for(c=1;c<=1*row-1;c++)
          printf("*");
          printf("\n");
    }
    getch();
}