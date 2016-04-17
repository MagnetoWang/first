#include <stdio.h>
#include<string.h>
//#include<windows.h>
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
	//getchar();
	char wanshen[7]="wanshen";
	//puts(wanshen);
	//asleep(10);
	char *Pcopy=article,*aim=wanshen;
	do{

        printf("%s2\n",Pcopy);
		Pcopy=strstr(Pcopy,aim);
		//Pcopy++;
		if(Pcopy!=NULL)
        {
            Pcopy++;
            times++;
        }

	}while(Pcopy!=NULL);
	printf("%d\n",times );
	return 0;
}
/*wanshen
wanshen
wandfsf
wadfsdw
anshens*/
