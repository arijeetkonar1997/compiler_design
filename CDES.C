#include<stdio.h>
#include<conio.h>
void main()
{
char ch[50], ch1[50];
int i=0,k=0;
int l;
clrscr();
printf("Enter the production \n");
gets(ch);
for(i=0;ch[i]!='\0';i++)
{
	if(ch[i]>='a' && ch[i]<='z')
	{
		ch1[k]=ch[i];
		k++;
	}
}
	printf("The non terminals are \n");
	for(l=97;l<=122;l++)
	{
		for(k=0;ch1[k]!='\0';k++)
		{
			if((char)l==ch1[k])
			{
				printf("%c",ch1[k]);
				printf("\n");
				break;
			}
		}
	}
getch();
}