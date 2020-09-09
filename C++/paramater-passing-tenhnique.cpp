#include<stdio.h>
/* Example for call by value*/

 void Swap(int x,int y)
 	{
 		int temp;
		 temp=x;
		 x=y;
		 y=temp;
		 	printf("Elements After swapping are %d %d \n",x,y);	
	}
int main()
{
	int var1,var2;
	printf("Enter the first number\n");
	scanf("%d",&var1);
	printf("Enter the second number\n");
	scanf("%d",&var2);                              
	printf("Elements Before swapping are %d %d \n",var1,var2);
	Swap(var1,var2);                             //Here value is passed as a argument to the foraml parameter
	
	
return 0;
}


/* Example for call by address*/
/*
 void Swap(int *x,int *y)
 	{
 		int temp;
		 temp=*x;
		 *x=*y;
		 *y=temp;
		 		
	}
int main()
{
	int var1,var2;
	printf("Enter the first number\n");
	scanf("%d",&var1);
	printf("Enter the second number\n");
	scanf("%d",&var2);
	printf("Elements Before swapping are %d %d \n",var1,var2);
	Swap(&var1,&var2);                                   //Here Addreaa is passed as a argument to the foraml parameter
	printf("Elements After swapping are %d %d \n",var1,var2);
	
return 0;
}
*/

/* Example for call by Reference*/                             //it is mainly implemented in C++ rather then C
/*

 void Swap(int &x,int &y)
 	{
 		int temp;
		 temp=x;
		 x=y;
		 y=temp;
		 	
	}
int main()
{
	int var1,var2;
	printf("Enter the first number\n");
		scanf("%d",&var1);
	printf("Enter the second number\n");
		scanf("%d",&var2);
	printf("Elements Before swapping are %d %d \n",var1,var2);
	Swap(var1,var2);                                                             //Here Reference is passed as a argument to the foraml parameter
	printf("Elements After swapping are %d %d \n",var1,var2);
	
	
return 0;
}
*/
