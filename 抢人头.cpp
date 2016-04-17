#include<stdio.h>
int main(int argc, char const *argv[])
{
	int wanshen,liangliang;
	int kill;
	int bleed;
	while(scanf("%d%d%d",&wanshen,&liangliang,&bleed)!=EOF)
	{
		kill=wanshen+liangliang;
		if (wanshen>bleed)
		{
		   		printf("wanshen\n");
		   		continue;
		}
		int remainer=bleed%kill;
		printf("%d",remainer);
		if (remainer>wanshen||remainer==0)
		{
			printf("light\n");
		}
		else{
			printf("wanshen\n");
		}
	}
	return 0;
}
