/*the question called Search ID from XDOJ 

第一行输入T,表示有T组测试数据（T<=5)
接下来一行输入整数n,代表有n个区间（0=<n<=10^5）
接下来n行，每行输入三个整数x,y,id.代表区间[x,y]所对应的城市ID。数据确保任意俩个区间交集为空，且ID唯一。（0=<x<y<=10^8 , 0=<ID<=10^8）
接下来一行输入整数m,代表m次查询（0=<m<=10^5）
接下来m行，每行输入一个整数V，代表所查询的IP（V<=10^8）
对于每次查询，输出一行，表示其对应的城市ID。
如果未找到，输出-1


Thelink is http://acm.xidian.edu.cn/problem.php?cid=1005&pid=0*/
#include<stdio.h>
#include<math.h>
#ifndef MAX
#define MAX 100
#endif
int the_left_of_interval_point[MAX];
int the_right_of_interval_point[MAX];
int ID[MAX];
int main(int argc, char const *argv[])
{ 
  int search;
  int Data1,Data2;
  int t;
  scanf("%d",&t);
  for(int n=0;n<t;n++)
  {
  	scanf("%d",&Data1);
  for (int i = 0; i < Data1; i++)
  {
    scanf("%d%d%d",&the_left_of_interval_point[i],&the_right_of_interval_point[i],&ID[i]);
    /* code */
  }
  scanf("%d",&Data2);
  for (int i = 0; i < Data2; i++)
  {
    scanf("%d",&search);
    for (int j= 0; j<= Data1; j++)
    {
      if (search>=the_left_of_interval_point[j]&&search<=the_right_of_interval_point[j])
      {
        printf("%d\n",ID[j] );
        break;
        /* code */
      }
      
    
      if(j==Data1)
    {
    	printf("-1\n");
	}
    }
    //int j;

    /* code */
  
  }
  }
  return 0;
}
