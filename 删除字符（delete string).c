#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	char string1[100009]={0},string2[100009]={0};
	
	//gets(string1);
	//gets(string2);
	while(scanf("%s%s",string1,string2)!=EOF)
	{
		char putstring[100009]={0};
		string1[100009]={0};
		string2[100009]={0};
		int empty=0;
		int haxi[27]=0;
		int length1=strlen(string1);
		int length2=strlen(string2);
		for (int i = 0; i < length2; i++)
		{
			haxi[string2[i]-96]++;
		}
		for (int i = 0; i < length1; i++)
		{
			if (haxi[string1[i]-96]==0)
			{
				putstring[empty]=string1[i];
				empty++;
				/* code */
			}
			/* code */
		}
		if (empty==0)
		{
			printf("EMPTY\n");
			/* code */
		}
		else{
			printf("%s\n",putstring );
		}
	}
	
	return 0;
}
