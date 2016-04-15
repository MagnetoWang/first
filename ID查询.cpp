/*the question called Search ID from XDOJ 

��һ������T,��ʾ��T��������ݣ�T<=5)
������һ����������n,������n�����䣨0=<n<=10^5��
������n�У�ÿ��������������x,y,id.��������[x,y]����Ӧ�ĳ���ID������ȷ�������������佻��Ϊ�գ���IDΨһ����0=<x<y<=10^8 , 0=<ID<=10^8��
������һ����������m,����m�β�ѯ��0=<m<=10^5��
������m�У�ÿ������һ������V����������ѯ��IP��V<=10^8��
����ÿ�β�ѯ�����һ�У���ʾ���Ӧ�ĳ���ID��
���δ�ҵ������-1


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
