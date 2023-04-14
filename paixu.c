#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	printf("请输入三个数字\n");
	scanf("%d%d%d",&a,&b,&c);
	for(x=0;;x++)
	{
		if (a-x==0)
		{
			printf("%d ",a);
		}
	    else if  (b-x==0)
		{
			printf("%d ",b);
		}
		else if (c-x==0)
		{
			printf("%d ",c);
		}
		else if(x>a&&x>b&&x>c)
			break;
	 }
	return 0;
}