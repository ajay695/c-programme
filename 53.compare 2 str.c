//program to compare two string

#include <stdio.h>
#include <string.h>
   void main()
{
    char str1[50],str2[50];
       
        printf("enter first string:");
        gets(str1);
        printf("enter second strings:");
        gets(str2);
        
        if(strcmp(str1,str2)==0);
        printf("\nString are equal.");
        else
        printf("\nString are not equal.");
        
}
