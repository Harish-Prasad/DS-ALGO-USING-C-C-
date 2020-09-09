//The Below comment line gives the changes that has to be made in order to change the exiting queue program to stack program using linked list.
#include<stdio.h>
#include<stdlib.h>
struct Queue_using_linked_list                           //struct stack_using_linked_list
{
	int data;
	struct Queue_using_linked_list *next;               // struct stack_using_linked_list *next;
};
typedef struct Queue_using_linked_list node;            //typedef struct stack_using_linked_list node;
node *front=NULL;                                      //use one pointer with the name top for stack implementation using linked list. i.e node *top=NULL
node *rear=NULL;                                      // not required
void enqueue(int x)                                   // void push(int x)
{
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	newnode->data=x;
	newnode->next=NULL;                     //newnode->next=top; and newnode=top;
	if(rear==NULL&&front==NULL)              //not required
	{
		front=rear=newnode;                    //not required
	}
	else                                        //not required
	{
		rear->next=newnode;                   //not required
		rear=newnode;                           //not required
	} 
}
void display()
{
	node *temp;                  // temp=top;
	if(rear==NULL&&front==NULL)   //if(top==NULL)
	{
		printf("Queue is empty\n");               // //printf("stack is empty\n");
	}
	else
	{
		temp=front;                  //not required
		while(temp!=NULL)           // required
		{
		printf("%d\t\t",temp->data);
		temp=temp->next;
	    }
	}
	
}
void dequeue()     //void pop()
{
	node *temp;
	temp=front;                   //temp=top
		if(rear==NULL&&front==NULL)      //if(top==NULL)
	{
		printf("Queue is empty\n");               //printf("stack is empty\n");
	}
	else
	{
		printf("%d is the element deleted",front->data);                   //	printf("%d is the element deleted",top->data);
		front=front->next;                          //	top=top->next;
		free(temp);
	}
	
}
void peek()       //peek means print the top most item without deleting it.
{
		if(rear==NULL&&front==NULL)   //if(top==NULL)
	{
		printf("Queue is empty\n");          // //printf("stack is empty\n");
	}
	else
	{
		printf("%d",front->data);      //	printf("%d",top->data);
	}
	
}
void main()
{
	int x;
	int choice;
	while(1)
	{
		printf("\n1.enqueue\n");                    //printf("\n1.push\n");
		printf("2.dequeue\n");                      //printf("2.pop\n");
		printf("3.display\n");
		printf("4.peek\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the element to be inserted\n");
					scanf("%d",&x);
					enqueue(x) ;            //push(x);
					break;
			case 2: dequeue();               //pop();
					break;
			case 3: display();
					break;
			case 4: peek();
					break;
			default:printf("Invalid choice\n\n\n\n");
		}
	}
	return;
}

