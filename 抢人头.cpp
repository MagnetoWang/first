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
		}
		int remainer=bleed%kill;
		if (remainer>=wanshen)
		{
			printf("light\n");
		}
		else{
			printf("wanshen\n");
		}
	}
	return 0;
}
