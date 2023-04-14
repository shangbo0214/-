#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int i = 1;
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	while(i<=num1||i<=num2)
	{
		if(num1 %i == 0 && num2 %i == 0)
		  {
		   num3 = i;
		  }
		 i++;		 
	}
	printf("%d\n",num3);
	return 0;
}
