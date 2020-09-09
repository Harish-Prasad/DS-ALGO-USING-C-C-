#include<stdio.h>
void main()
{
	int n,result;
	printf("enter the number:");
	scanf("%d",&n);
	result=fact(n);
	printf("factorial of the given number is %d",result);

}
int fact(int n)
{
	int result;
	if(n==0)
	{
		result=1;
	}else
	{
		result=n*fact(n-1);
	}
	return result;
	
}
