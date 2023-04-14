#include<stdio.h>
int main()
{
	int i = 100;
	int j = 2;
    for(i = 100;i <=200; i++)
	   {
		   for(j = 2; j<200; j++)
			   {
				   if(i%j==0)
					   break;
		       }
	if(j>=i)
		printf("%d ",i);
	 }
	return 0;
}
	
