#include<stdio.h>
#include<cmath>
void TOH(int,char,char,char);
int main()
{
int n,step;
printf("\n Enter no of disk:");
scanf("%d",&n);
step=pow(2,n)-1;
printf("No of step : %d",step);
TOH(n,'O','D','I');
return 0;
}
void TOH(int n, char A, char B, char C)
{ 
	if (n>0)
	{
		TOH(n-1,A,C,B);
	
		printf("\n Move the %d disk from %c to %c",n,A,B);
		TOH(n-1,C,B,A);
	}
}
