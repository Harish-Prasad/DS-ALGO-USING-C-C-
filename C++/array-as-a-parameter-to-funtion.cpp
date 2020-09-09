#include<stdio.h>

 void function(int array[],int size)  //here array act as a interal pointer; we can also use "int array[]" as "int *array" as it is pass by address
 	{              
 		int i;
 		printf("Array elements are ");
 		array[1]=20;
		for(i=0;i<size;i++)
		{
			printf("%d\t",array[i]);
		}
   }
int main()                      //program execution always begin with main() function
{
	int array[5]={1,2,3,4,5};
	function(array,5);                          //pass by address not by value
	
	
	
return 0;
}
