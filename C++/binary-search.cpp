
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct Array
{
	int array[20];
	int size;
	int length;	
}type;

int binarySearch(type obj, int low,int high,int key)
{
	int i;
	while(low<=high)
{

	int mid=floor(low+high/2);
	if(key==obj.array[mid])
		return mid;
	else if(key>obj.array[mid])
			low=mid+1;
		else
			high=mid-1;
}
}


int main()
{
	type obj={{5,6,7,8,9,3,7,4},8,8};
    int i=0,loc;
    int low=0,high=obj.length-1,key;
    printf("\narray elements are:");
    while(i<obj.length)
    {
    	printf("%d \t", obj.array[i]);
    	i++;
	}
	printf("\nlength of array is %d",obj.length);
	printf("\nEnter the key");
	scanf("%d",&key);
	loc=binarySearch(obj,low,high,key);
	printf("\n The element is present at the index %d",loc+1);
 return 0;
}

