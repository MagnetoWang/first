#include <stdio.h>
#include<string.h>
char article[1000];
int main(int argc, char const *argv[])
{
	int row,times=0,i;
	scanf("%d",&row);
	getchar();
	char sentence[100];
	for (i = 0; i < row; i++)
	{
	    
		gets(sentence);
		//getchar();
		strcat(article,sentence);
		/* code */
		puts(article);
	}
	puts(article);
	getchar();
	char wanshen[]="wanshen";
	char *Pcopy=article;
	while(Pcopy!=NULL)
	{
		Pcopy=strstr(Pcopy,wanshen);
		Pcopy++;
		times++;
	}
	printf("%d\n",times );
	return 0;
}
/*wanshen
wanshen
wandfsf
wadfsdw
anshens*/
