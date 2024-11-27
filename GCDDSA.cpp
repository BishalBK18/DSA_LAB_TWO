#include<stdio.h>
int GCD(int a, int b)
{
	if(b==0)
	return a;
	else
	return GCD(b,a%b);
}
int main ()
{
	int num1,num2,result;
	printf("Enter two numbers to find GCD:");
	scanf("%d%d",&num1,&num2);
	result=GCD(num1,num2);
	printf("GDC of %d and %d : %d",num1,num2,result);
	return 0;
	
}
