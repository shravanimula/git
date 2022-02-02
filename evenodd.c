#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,num;
	printf("enter the numbers\n");
	scanf("%d",&num);
	printf("even numbers\n");
	for(i=1; i<=num; i++){
		if(i%2==0)
		{
			printf("%d  ",i);
		}
	
	}
	printf("odd numbers\n");
	for(int i=1;i<=num;i++)
	{
	if(i%2==1)
	{
		printf("%d ",i);
	}
	}
	return 0;
}

