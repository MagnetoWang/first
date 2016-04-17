#include <stdio.h>
#include<string.h>
char article[1000];
main()
{
	int row,times=0,i;
	while(scanf("%d",&row)!=0)
    {

    times=0;
    getchar();
    char a[1]={"a"};
    strcpy(article,a);
	char sentence[100];
	//strcpy(sentence,a);
	for (i = 0; i < row; i++)
	{

		gets(sentence);
		//getchar();
		strcat(article,sentence);
		/* code */
		//puts(article);
	}
	//puts(article);
	//getchar();
	char wanshen[]="wanshen";
	//puts(wanshen);
	//asleep(10);
	char *Pcopy=article,*aim=wanshen;
	do{

        //printf("%s2\n",Pcopy);
		Pcopy=strstr(Pcopy,aim);
		//Pcopy++;
		if(Pcopy!=NULL)
        {
            Pcopy++;
            times++;
        }
	}while(Pcopy!=NULL);
	printf("%d\n",times );

    }


}
/*wanshen
wanshen
wandfsf
wadfsdw
anshens*/
