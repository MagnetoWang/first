#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 1024
int English_sentence_input(char *initial_data, int n, char *&Standby_pointer);
int Statistical_word_occurrences(char *, char *&);
int find_and_substitute(char *findword, char *substitute, char *&Standby_pointer);
main()
{
	int n, t;
	char *Standby_pointer, initial_data[max], A_number_of_words[20];
	printf("������Ӣ�ľ���\n");
	gets(initial_data); //scanf can't access space

	//don't need getchar();  anymore
	printf("ȥ������ո�ľ���\n");
	n = strlen(initial_data);
	//printf("%d\n",n);
	English_sentence_input(initial_data, n, Standby_pointer); //
	//  http://jingyan.baidu.com/article/b24f6c82cc9add86bfe5daa3.html
	//printf("%d",English_sentence_input);
	printf("������Ҫ��ѯ�ĵ��ʣ�������ո��ʾ��ʼ���뵥�ʣ������뵥�ʣ�Ȼ������ո��ʾ�����������룬���س��ύ\n");
	
	gets(A_number_of_words);
	t = Statistical_word_occurrences(A_number_of_words, Standby_pointer);
	printf("�õ��ʳ��ִ���Ϊ\n");
	printf("%d\n", t);
	printf("������Ҫ�滻�ĵ��ʣ�������ո��ʾ��ʼ���뵥�ʣ������뵥�ʣ�Ȼ������ո��ʾ�����������룬���س��ύ\n");
	char substitute[20], findword[20];
	gets(findword);
	printf("�������滻���ʣ�������ո��ʾ��ʼ���뵥�ʣ������뵥�ʣ�Ȼ������ո��ʾ�����������룬���س��ύ\n");
	gets(substitute);
	find_and_substitute(findword, substitute, Standby_pointer);

//	free(Standby_pointer);
}
int English_sentence_input(char *initial_data, int n, char *&Standby_pointer)
{
	int i, j, k = 0, t;
	char changesentence[max];
	Standby_pointer = changesentence;
	for (i = 0; i<n; i++)
	{
		if (initial_data[i] <= 90 && initial_data[i] >= 65 || initial_data[i] <= 122 && initial_data[i] >= 87)
		{
			changesentence[k] = initial_data[i];
			if (initial_data[i + 1] == 32)
			{
				changesentence[k + 1] = 32;
				k++;
				i++;
			}
			k++;
		}
	}
	changesentence[k] = 0;
	printf("%s\n", Standby_pointer);
	t = strlen(changesentence);
	return t;//strlen(Standby_pointer);
}
int Statistical_word_occurrences(char *A_number_of_words, char *&Standby_pointer)
{
	int i, j, k, t = 0, n;
	char *p;
	k = strlen(A_number_of_words);
	n = strlen(Standby_pointer);
	p = Standby_pointer;
	for (i = 0; p != NULL; i++)
	{
		p = strstr(p, A_number_of_words);
	//	p--;
		if (p!=NULL)//if (p[k+1]==32&&p[0]==32)//if()//if (p!=NULL)
		{
			
			p++;
			p+=k;//i will over overcome
			t++;
		}
	}
	return t;
}
int find_and_substitute(char *findword, char *substitute, char *&Standby_pointer)
{
	int i, j, k, t = 0, n,k1;
	char *p1, *p2, aim[1024];
	k = strlen(findword);
	k1 = strlen(substitute);
	//n=strlen(Standby_pointer);
	p1 = Standby_pointer;
	p2 = Standby_pointer;
	n = Statistical_word_occurrences(findword, Standby_pointer);//�ҵ����ִ���
	if (n == 0)
	{
		printf("û����Ҫ�滻�ĵ���");
		return 0;
	}
	for (j = 0; j<=n; p1++, j++)
	{
		p1 = strstr(p1, findword);
		if (p1 == NULL){
			aim[t] = '\0';
			strcat(aim, p2);
			break; //Խ�� 
		}
		i = p1 - p2;
		if (i == 0)
		{
			aim[t] = '\0';
			strcat(aim, substitute);
			p2 = p2 + k;
			t = t + k1;
			//p1++;
			continue;
		}
		
		aim[t] = '\0';
		strncat(aim, p2, i);//��p2��ʼ����i��Ԫ�ص�aim��,���ܸ���Ӧ�������� 
		t = i + t;
		aim[t] = '\0';
		strcat(aim, substitute);
		t = t + k1;
		p2 =p2+i + k;//p2Ӧ�ü�findword�ĳ�������Ҫע�⣬�����aim��Ӧ�ü���substitute�ĳ���
	}
	printf("�滻���Ӣ�ľ���\n");
	printf("%s\n", aim);
	return 0;
}

