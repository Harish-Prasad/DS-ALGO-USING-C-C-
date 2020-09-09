
#include<stdio.h>
#define max 5 
int stack[max];
int top=-1;

void push(int);
void pop();
int isFull();
int isEmpty();
void traverse();
void peek();

void main()
{ 
   int ch,item;
while(1)
{
  printf("1.push\n");
  printf("2.pop\n");
  printf("3.peek\n");
  printf("4.traverse\n");
  printf("5.quit\n");
  printf("enter your choice : ");
  scanf("d",&ch);
  
  switch(ch)
  {
  	 case 1: printf("enter the element:");
  	        scanf("%D",&item);
  	        push(item);
  	        break;
  	 case 2: item=pop();
  	        if(item==0)
			 {
			 	printf("stack is underflow\n");
			  } 
			  else
			  {
			  	printf("popped item : %d\n",item);
			  }
			  break;
  	 case 3: peek();
  	        break;
  	 case 4: poll();
  	        break;
  	 case 5: exit(0);
  	 default: printf("invalid input \n\n");
  }
  void push(int ele)
  {
  	
  	if(isFull())
  	{
  		printf("stack is Full");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("%d is pushed\n",ele);
	   	
	}
  }
   int isFull()
  {
  	if(top==max-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
  }
  int pop()
{
	if(isEmpty())
	{
		return 0;
	}
	else
	{
		return stack[top--];
		
	}
}
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
void peek()
{
	if(isEmpty())
	{
 		printf("stack is empty \n");
	}
	else
	{
		printf("peek element : %d \n",stack[];
	}
}
void traverse()
{
	if(isEmpty())
	{
		printf("stackis empty \n");
	}
	else
	{
		int i;
		printf("stack elements: \n");
		for(i=0;i<=top;i++)
		{
			printf("%d \n",stack[i]);
			
		}
	}
}
}
}


