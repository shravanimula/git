#include<stdio.h>
int main()
{
	int num,sum=0;
label:	printf("Enter Postive numbers to sum:");
	while(1)
	{
		scanf("%d",&num);
		if(num<0)
			goto label;
		if(num<=0)
	{
sum=sum+num;
break;
	}
		sum=sum+num;
	}
	printf("%d",sum);	
	return 0;
}


