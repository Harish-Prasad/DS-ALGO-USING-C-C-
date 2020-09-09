#include<iostream>
using namespace std;
 
int  main()
{
	
  int i,n,temp;
  int array[4]={1,2,3,4};
  
    printf("Original array elements are\n");
    for(i=0;i<4;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    temp=array[0];                   
    for(i=0;i<4;i++)
    {
        array[i]=array[i+1];
    }
    array[3]=temp;
 
    printf(" array elements  after rotating by one postion in the left direction");
    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("%d ",array[i]);
    }
}
