#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10,b=5;
	char choice;
	while(1)
	{
		printf("a.add s.sub d.exit\n");
	printf("enter ur choice\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'a':printf("add two numbers= sum is %d\n",a+b);
			 break;
		case 's':printf("subtract two numbers= diff is %d\n",a-b);
			 break;
		case 'd': exit(0);
	}
}
}

