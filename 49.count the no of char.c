#include<stdio.h>
#include<string.h>
int main()
{
char sentence[100];
int char_count=0,i;
int w=0;

printf("enter the string:");
gets(sentence);

for(i=0;sentence[i]!='\0';i++)
{
char_count++;

	if(sentence[i]==' ')
		{
			w++;
		}

}
     printf(" the number of character and words are %d and %d",char_count,w+1);
 return 0;
}
