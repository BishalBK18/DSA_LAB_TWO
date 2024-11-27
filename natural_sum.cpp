#include<stdio.h>
long sum(long n)
{
	if (n==0)
	return 0;
	else 
	return n+sum(n-1);
}
int main()
{
	long num, result;
	printf("Enter the terms of  number to find the sum:");
	scanf("%d",&num);
	result= sum(num);
	printf("The factorial of %d is %d",num,result);
}
