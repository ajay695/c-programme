#include <stdio.h>
   void main()
 {
     int i,j,n=6;
     for(i=1;i<=n;i=i+1)
     {
         printf("*");
     }
        printf("\n");
      for(i=1;i<=n-2;i=i+1)
     {
         for(j=1;j<=(n-i-1);j=j+1)
            {
                printf(" ");
            }
              printf("*");
              printf("\n");
     }
         for(i=1;i<=n;i=i+1)
         {
         printf("*");
         }
       return;
 }
 
 
