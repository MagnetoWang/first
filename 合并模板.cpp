#include<iostream>
#include<cstring>
#include<algorithm>
#include<numeric>
#include<vector> 
using namespace std;
int main(int argc, char const *argv[])
{
	long long int one_number;//123456789123456789
	int The_number_of_file,The_limitation_of_process;
	while(cin>>The_number_of_file>>The_limitation_of_process)
	{
	vector<long long int> file_kb(The_number_of_file);
	long long int sum=0;
	long long int Sum=0; 
	file_kb.clear();
		
	for (int i = 0; i < The_number_of_file; i++)
	{
		cin>>one_number;
		//cout<<one_number;
		file_kb.push_back(one_number);
	}
		if(The_number_of_file==1)
		{
			cout<<0<<endl;
			continue;
		}
	//int mod=The_number_of_file/The_limitation_of_process;
	int flag=1;
	sort(file_kb.begin(), file_kb.end());
	if (The_number_of_file<=The_limitation_of_process)
	{
		 
		//sum=accumulate(file_kb.begin(), file_kb.end(),0);something wrong
		for(int i=0;i<The_number_of_file; i++)
		{
			sum=sum+file_kb[i];
			//cout<<sum<<endl;
			//cout<<file_kb[0]<<endl<<file_kb[1];
		}
		//cout<<file_kb[0]<<endl<<file_kb[1];
		//cout<<sum<<endl;
		printf("%llu\n",sum);
		//return 0;//NOTES:don't do that. you should end up with this programm by cin operation
		/* code */
	}
	else
	{
		int t=0;
	for (int i = 0; i < The_number_of_file; i++)
	{
		sum=sum+file_kb[i];
		t++;
		if (t%The_limitation_of_process==0||i==The_number_of_file-1)
		{
			cout<<"sum="<<sum<<endl;
			Sum=Sum+sum;//when the datas are 6 2,there is error
			/* code */
			cout<<"Sum="<<Sum<<endl;
			cout<<"t="<<t<<endl;
			t=1;
			if(i==The_number_of_file-1)
			{
				break;
			}
		}
		//cout<<sum<<endl;
	}
	//cout<<sum<<endl;
	printf("%llu\n",Sum);
	}
	}

	return 0;
}
/*
123456789
123456789
123456789
123456789
123456789
123456789
123456789
*/