#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main ()
{
	int i,n,t;
	srand( (unsigned) time(NULL));
	t = rand() % 101 - 1;

	for (i=0;i<10;i++)
	{
		printf("���������֣�"); 
		scanf("%d",&n);
		if (n==t)
		{
			printf("��ȷ\n");
			
			break;
		}
		else if(n<t)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�´���\n");
		}
		 
	}
if(i>9)
		 	printf("������\n");
		 	else 
			printf("��Ӯ��\n");
	
	return 0;
}
