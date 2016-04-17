#include<stdio.h>
long double sequence_of_number[120];
long double the_sum_sequence_of_number[120];
 main()
{
	long double peach_number;
	int i;
	sequence_of_number[0]=0.0;
	sequence_of_number[1]=1.0;
	the_sum_sequence_of_number[0]=0.0;
	the_sum_sequence_of_number[1]=1.0;
	printf("the_sum_sequence_of_number[1]=%Lf\n",the_sum_sequence_of_number[1]);
	long double remainer;
	scanf("%Lf",&the_sum_sequence_of_number[1]);
	printf("%Lf\n",the_sum_sequence_of_number[1]);
	while(scanf("%Lf",&peach_number)!=EOF)
	{

		for (i = 2; the_sum_sequence_of_number[i-1]<=peach_number; )
		{
			printf("the_sum_sequence_of_number[i-1]=%Lf\n",the_sum_sequence_of_number[i-1]);
			sequence_of_number[i]=sequence_of_number[i-2]+sequence_of_number[i-1];
		    printf("sequence_of_number[i]=%Lf\n",sequence_of_number[i]);
			the_sum_sequence_of_number[i]=sequence_of_number[i]+the_sum_sequence_of_number[i-1];
			i++;
			/* code */
		}
		i--;
		printf("i=%d\n",i);
		remainer=peach_number-the_sum_sequence_of_number[i-1];
		printf("the_sum_sequence_of_number[i-1]=%d\n",the_sum_sequence_of_number[i-1]);
		if (remainer<=sequence_of_number[i-1])
		{
			printf("%d %.0Lf\n",i-1,sequence_of_number[i-1] );
			/* code */
		}else{
			printf("%d %.0Lf\n",i,remainer );
		}
	}
	/* code */
}
