#include<stdio.h>
 
int main() 
{
	int rad;
	float PI = 3.14, area, ci;
        printf("enter radius of circle: ");
	scanf("%d", &rad);
	area = PI * rad * rad;
	printf("Area of circle : %f ", area);	   
        ci = 2 * PI * rad;
         printf("\nCircumference : %f ", ci);			 
	return (0);
}
