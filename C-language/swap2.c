#include<stdio.h>
void swap(int x,int y);
int main(void)
{
	int a,b;
	printf("Enter two Numbers:");
	scanf("%d %d",&a,&b);
		printf("Before Swapping a=%d  b=%d\n",a,b);
		swap(&a,&b);
		printf("After swapping a=%d  b=%d\n",a,b);
		return 0;
}
void swap(int *a,int *b)
{
 	 int temp;
 	 temp=*a;
  		*a=*b;
  		*b=temp;
  printf("The Value of X and Y is %d %d respectively? \n",x,y);
  return 0;
}
