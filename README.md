# first
现在我大致更明白如何使用github
不过这样的过程还是需要时间，即如何熟练的用命令行使用github。并且达到充分运用github的功能
# 代码插入
---------
#  3Sum
-----
    #include<iostream>
    using namespace std;
    class solution{
	public:
		std::vector<std::vector<int> > threesum(std::vector<int> &num){
			std::vector<char> ret;
			if (num.size()<=2)
			{
				/* code */
				return ret;
			}
			sort(num.begin(),num.end());
			for (int i = 0; i < num.size()-2; ++i)
			{
				int j=i+1;
				int k=num.size()-1;
				while (j<k)
				{
					if(num[i]+num[j]+num[k]==0)
					{
						ret.push_back(num[i]);
						ret.push_back(num[j]);
						ret.push_back(num[k]);
						j++;
						k--;
					
					while(j<k&&num[j]==num[j-1])

					{
						j++;
						/* code */
					}
					while (j<k&&num[k]==num[k-1])
					{
						k--;
					}
				    }
				    if(num[i]+num[j]+num[k]<0)
				    {
				    	j++;
				    }
				    else
				    {
				    	k++;				  
				    }
				    while(i<num.size()-1&&num[i]==num[i+1])
				    {
				    	i++;
				    }
				}
				/* code */
			}
		}
    }
		
    