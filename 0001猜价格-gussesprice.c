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
		printf("请输入数字："); 
		scanf("%d",&n);
		if (n==t)
		{
			printf("正确\n");
			
			break;
		}
		else if(n<t)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜大了\n");
		}
		 
	}
if(i>9)
		 	printf("你输了\n");
		 	else 
			printf("你赢了\n");
	
	return 0;
}
