#include<stdio.h>
#include<stdlib.h>

 struct Array
{
	
	int array[10];
		int size;
			int length;
};

void Display(struct Array arr)
{
	int i=0;
		printf("Array elements are\n");
			for(i=0;i<arr.length;i++)
				printf("%d\n",arr.array[i]);
}

int main()
{
	struct Array arr={ {1,2,3,4,5},20,5 };
		Display(arr);
	
	
return 0;
}
