#include<stdio.h>
#include<stdlib.h>

 struct Array
{
	
	int *A;
		int size;
			int length;
};
int key;                  //Global declaration
void Display(struct Array arr)                       // traversing the given Array
{
	int i=0;
		printf("Array elements are\n");
				for(i=0;i<arr.length;i++)
					printf("%d\n",arr.A[i]);
}
void Insert(struct Array arr,int index)        //  inserting an element at specified index value
{
	int ele,i;
	printf("Enter the element to be added at the index %d  ",index);
		scanf("%d",&ele);
			for(i=arr.length;i>index;i--)
				arr.A[i]=arr.A[i-1];
					arr.A[index]=ele;
						arr.length++;
	Display(arr);
}
void Delete(struct Array arr)               // deleting the array element from the specified index value
{
	int del,index,i;
	printf("Enter the element to be deleted\n");
		scanf("%d",&del);
			printf("Enter the index value \n");
				scanf("%d",&index);
					for(i=index;i<arr.length;i++)
						arr.A[i]=arr.A[i+1];
							printf("The element %d is deleted from the index %d\n",del,index);
								arr.length--;
	Display(arr);	
}
int Linearsearch(struct Array arr)
{
	int i;
	printf("Enter the search element\n");
		scanf("%d",&key);
			for(i=0;i<arr.length;i++)
			{
				if(key==arr.A[i])
				{
					return i;
				}
			}
			return -1;
}
int main()
{
	struct Array arr;
	int item,index;
	int n,i;
		printf("Enter size of an array\n");
			scanf("%d",&arr.size);
				arr.A= (int *)malloc(arr.size*sizeof(int));
				arr.length=0;
					printf("Enter how many no\n");
						scanf("%d",&n);
							printf("Enter the array elements\n");
								for(i=0;i<n;i++)
									scanf("%d",&arr.A[i]);
										arr.length=n;       
											
	Display(arr);
		printf("Enter the element to be inserted at the last\n");
			scanf("%d",&item);
				arr.A[n]=item;                          // inserting an element at the end of the array
					n++;
						arr.length=n;
	Display(arr);
		printf("Enter the element at particular index in a given array\n");
			printf("Enter the index value\n");
				scanf("%d",&index);
					Insert(arr,index);
	Delete(arr);
	if(i!=-1)
		printf("The search element %d is found at index %d",key,Linearsearch(arr));
	else
			printf("The search element %d is Not-found at any of the index (undefined_Index) %d",key,Linearsearch(arr));
return 0;
}
