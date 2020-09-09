#include<stdio.h>
#include<stdlib.h>
struct sll{
	char usn[11];
	char name[30];
	char branch[4];
	int sem;
	char phno[11];
	struct sll *link;
};
typedef struct sll node;
node *start=NULL;
node *getnode()
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	if(newnode==NULL)
	printf("Memory Overflow");
	else
	{
		printf("\nEnter the USN ,Name ,Branch ,Sem ,Phone number\n");
		scanf("%s%s%s%d%s",newnode->usn,newnode->name,newnode->branch,&newnode->sem,newnode->phno);
		newnode->link=NULL;
		return newnode;
	}
}
void insert_front()
{
	node *newnode;
	newnode=getnode();
	newnode->link=start;
	start=newnode;
}
void insert_end()
{
	node *temp,*n1;
	n1=getnode();
	if(start==NULL)
		start=n1;
	else
	{
		temp=start;
		while(temp->link!=NULL)
		temp=temp->link;
		temp->link=n1;
	}
}
void delete_front()
{
	node *temp;
	if(start!=NULL)
	{
		temp=start;
		start=temp->link;
		printf("Deleted node is %c\n",temp->usn);
		free(temp);
	}
}
void delete_end()
{
	node *temp,*prev;
	if(start==NULL)
	printf("link is empty");
	else
	{
		prev=NULL;
		temp=start;
		while(temp->link!=NULL)
		{
			prev=temp;
			temp=(temp->link);
		}
		if(temp==NULL)
		start=NULL;
		else
		{
			prev->link=NULL;
		}
		printf("Deleted node is %c",temp->usn);
		free(temp);
	}
}
void display()
{
	int count=0;
	node *temp;
	if(start==NULL)
	printf("\nEmpty list");
	else{
		temp=start;
		printf("Details are\n");
		while(temp!=NULL){
			printf("\n%s\t\t%s\t\t%s\t\t%d\t\t%s\t\t",temp->usn,temp->name,temp->branch,temp->sem,temp->phno);
			count++;
			temp=temp->link;
		}
		printf("\nNumber of students is %d",count);
	}
}
int main()
{
int choice;
	while(45)
	{
		printf("1:insert_front\n");
		printf("2:insert_end\n");
		printf("3:delete_front\n");
		printf("4:delete_end\n");
		printf("5:Display\n");
		printf("6:Terminate\n");
	
		printf("Enter your choice from the Above list of choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					insert_front();
					break;
			case 2:insert_end();
					break;
			case 3:delete_front();
					break;
			case 4:delete_end();
					break;
			case 5:display();
					break;
			case 6:exit(0);
					break;
			default: printf("Invalid option!\n");
		}
	}
	return 0;
}

