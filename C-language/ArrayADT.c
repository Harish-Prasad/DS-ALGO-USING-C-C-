/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,*q;
    int i;
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;p[1]=5;p[2]=7;p[3]=9;p[4]=11;

    q=(int *)malloc(10*sizeof(int));

for(i=0;i<5;i++)
q[i]=p[i];

free(p);
p=q;
q=NULL;

for(i=0;i<5;i++)
printf("%d \n",p[i]);

return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
int *B[3];
int **C;
int i,j;
B[0]=(int *)malloc(4*sizeof(int));
B[1]=(int *)malloc(4*sizeof(int));
B[2]=(int *)malloc(4*sizeof(int));
C=(int **)malloc(3*sizeof(int *));
C[0]=(int *)malloc(4*sizeof(int));
C[1]=(int *)malloc(4*sizeof(int));
C[2]=(int *)malloc(4*sizeof(int));

for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
printf("%d ",C[i][j]);
printf("\n");
}

return 0;
}
