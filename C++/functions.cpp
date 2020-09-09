#include<stdio.h>

int addition(int x,int y)             //function to add two numbers
	{
		int sum;
		sum=x+y;
		return(sum);                    //return the sum to calling function 
	}
int main()
{
	int a=10;                             //instance variable
	int b=20;
	int result=addition(a,b);                        //function call
	printf("sum is %d",result);
}


