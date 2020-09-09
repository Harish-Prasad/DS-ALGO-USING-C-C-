#include<stdio.h>
#define N 10
int main(){
int array[N];
printf("Enter the array elements \n");
for(int i;i<N;i++)
{
    scanf("%d",&array[i]);
}
for(int i;i<N;i++)
{
    printf("\n %d",array[i]);
}




return 0;
}
