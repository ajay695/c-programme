#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int c1=0,i;
int w=0;

printf("enter the string:");
gets(str);

for(i=0;str[i]!='\0';i++)
{
c1++;

	if(str[i]==' ')
		{
			w++;
		}

}
     printf(" the number of character and words are %d and %d",c1,w+1);
 return 0;
}
