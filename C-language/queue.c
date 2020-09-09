#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int rear=0,front=0;
	void insert()
	{	
		int ele;
		if(rear==max)
			printf("Queue is Full\n");
		else{
				printf("Enter the element\n");
				scanf("%d",&ele);
				queue[rear]=ele;
				rear++;
		    }
	}
	void delete()
	{
		int i;
		if(front==rear)
			printf("Queue is Empty\n");
		else{
				printf("deleted item is %d",queue[front]);
				for(i=1;i<rear;i++)
				queue[i-1]=queue[i];
		    }
		    rear--;
	}
	void display()
	{
		int i;
		if(front==rear)
				printf("Queue is Empty\n");
		else{
				printf("Elements are:\n");
				for(i=front;i<rear;i++)
				printf("%d\n",queue[i]);
		    }
	}
void main()
{
	int choice;
	while(1)
	{
		printf("\n1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert();
					break;
			case 2: delete();
					break;
			case 3: display();
					break;
			default:printf("Invalid choice\n\n\n\n");
		}
	}
	return;
}
