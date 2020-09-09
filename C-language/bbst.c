
#include<stdio.h>
#include<stdlib.h>

struct BST
{
	int data;
	struct BST* left;
	struct BST* right;
};
typedef struct BST node;
node* root=NULL;
node* getnode()
{
	node* newnode;
	newnode=(node*)malloc(sizeof(node));
	if(newnode==NULL)
		printf("\n memory unallocated");
	else
	{
		printf("\n Enter the node data:");
		scanf("%d",&newnode->data);
		newnode->left=NULL;
		newnode->right=NULL;
	}
	return(newnode);
}
void preorder(node* root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node* root)
{
	if(root!=NULL)
	{
	   	inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
void postorder(node* root)
{
	if(root!=NULL)
	{
	   	postorder(root->left);
	   	postorder(root->right);
		printf("%d\t",root->data);
	}
}
void search(node* root,int key)
{
	int flag=0;
	node* temp=root;
	if(root==NULL)
		printf("\n No nodes to search");
	if(root->data==key)
	{
		flag=1;
		return;
	}
	else if(key<root->data)
			temp=temp->right;
		else
			temp=temp->left;
	if(flag==1)
		printf("\n Search successful");
	else
		printf("\n Search Unsuccessful");
}

void insert_node()
{
	node* n1;
	node* temp;
	node* prev;
	n1=getnode();
	if(root==NULL)
		root=n1;
	temp=root;
	while(temp!=NULL)
	{
		prev=temp;
		if(n1->data>temp->data)
			temp=temp->right;
		else
			temp=temp->left;
		
	}
	if(n1->data>prev->data)
			prev->right=n1;
		else
			prev->left=n1;
	
}


void main()
{
	int ch,n,key,i;
	while(1)
	{
		printf("\n1.insert_node\n2.traversal\n3.search\n4.exit\n");
		printf("\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\n Enter the no of nodes:");
					scanf("%d",&n);
					for(i=0;i<n;i++)
					{
						insert_node();
					}
					break;
			case 2: 
					printf("\n preorder Traversal");
						preorder(root);
					printf("\n Inorder Traversal");
						inorder(root);
					printf("\n postorder Traversal");
						postorder(root);
					break;
			case 3: printf("\n Enter the search node");
					scanf("%d",&key);
					search(root,key);
					break;
			case 4: exit(0);
					break;
			default: printf("\n Invalid choice?");
		}
	
	}
}


