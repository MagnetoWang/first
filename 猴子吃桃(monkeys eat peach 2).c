#include<stdio.h>
long long int sequence_of_number[120];
long long int the_sum_sequence_of_number[120];
 main()
{
	long long int peach_number;
	int i;
	sequence_of_number[0]=0;
	sequence_of_number[1]=1;
	the_sum_sequence_of_number[0]=0;
	the_sum_sequence_of_number[1]=1;
	//printf("the_sum_sequence_of_number[1]=%lld\n",the_sum_sequence_of_number[1]);
	long long int remainer;
	//scanf("%ld",&remainer);
	//printf("%Ld\n",remainer);
	while(scanf("%lld",&peach_number)!=EOF)
	{
	    if(peach_number==1||peach_number==2||peach_number==3)
	    {
	    	printf("1 1\n");
	    	continue;
	    }
		for (i = 2; the_sum_sequence_of_number[i-1]<=peach_number; )
		{
			//printf("the_sum_sequence_of_number[i-1]=%Lf\n",the_sum_sequence_of_number[i-1]);
			sequence_of_number[i]=sequence_of_number[i-2]+sequence_of_number[i-1];
		   // printf("sequence_of_number[i]=%Lf\n",sequence_of_number[i]);
			the_sum_sequence_of_number[i]=sequence_of_number[i]+the_sum_sequence_of_number[i-1];
			i++;
			/* code */
		}
		i--;
		//printf("i=%d\n",i);
		remainer=peach_number-the_sum_sequence_of_number[i-1];
		//printf("the_sum_sequence_of_number[i-1]=%d\n",the_sum_sequence_of_number[i-1]);
		if (remainer<=sequence_of_number[i-1])
		{
			printf("%d %llu\n",i-1,sequence_of_number[i-1] );
			/* code */
		}else{
			printf("%d %llu\n",i,remainer );
		}
	}
	/* code */
}
