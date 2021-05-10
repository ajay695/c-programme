//program to concatenate two string

#include <stdio.h>
#include <string.h>
   void main()
{
    char str[50],str2[50];
       
        printf("enter first string:");
        gets(str1);
        printf("enter second strings:");
        gets(str2);
        
        strcat(str1,str2);
        printf("\nString after concatenation is %s",str1);
        
}

/*output
enter first string:ajay 
enter second strings:sth
String after concatenation is ajay sth
*/
