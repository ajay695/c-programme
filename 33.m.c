/*  A                                                                                                   
    ABA                                                                                                    
    ABCBA                                                                                               
    ABCDCBA                                                                                             
    ABCDEDCA   

*/

#include<stdio.h>    
   void main()
{  
     char ch={'A'};    
     int i,j,k,m;    
      
      for(i=1;i<=5;i++)    
    {    
        for(j=0;j>=i;j--)    
            printf("  ");    
        for(k=1;k<=i;k++)    
            printf("%c",ch++);    
            --ch;    
        for(m=1;m<i;m++)    
            printf("%c",--ch);    
        printf("\n");    
       
    }    
    return;  
}  
