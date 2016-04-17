#include<stdio.h>
int sequence_of_number[100];
int the_sum_sequence_of_number[100];
int main(int argc, char const *argv[])
{
	int peach_number;
	sequence_of_number[0]=0;
	sequence_of_number[1]=1;
	the_sum_sequence_of_number[0]=0;
	the_sum_sequence_of_number[1]=1;
	int remainer;
	while(scanf("%d",&peach_number)!=EOF)
	{
		for (int i = 2; the_sum_sequence_of_number[i]>=peach_number; i++)
		{
			sequence_of_number[i]=sequence_of_number[i-2]+sequence_of_number[i-1];
			the_sum_sequence_of_number[i]=sequence_of_number[i]+the_sum_sequence_of_number[i-1];
			/* code */
		}
		remainer=the_sum_sequence_of_number[i]-peach_number;
		if (remainer<sequence_of_number[i-1])
		{
			printf("%d %d\n",i-1,sequence_of_number[i-1] );
			/* code */
		}else{
			printf("%d %d\n",i,remainer );
		}
	}
	/* code */
	return 0;
}