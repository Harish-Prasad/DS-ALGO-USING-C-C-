/*Author:Harish-Prasad
  Language: C
  Demo-Program using Array as ADT(Abstract Datatypes)!!
*/

/*Various operation performed on ARRAY ADT i.e Array DataStructure*/

#include<stdio.h>   //declaration of libraries i.e Header-files
#include<stdlib.h>  

struct Array           //Structure Definition
{
    int *array;        //pointer which will hold the Base Address of Array.
    int size;
    int length;

};

/*function to display the array elements in the given list*/
void display(struct Array *arr)
{
    printf("\nArray elements are: ");
    for(int i=0;i<arr->length;i++)
        {
            printf("%d\t",arr->array[i]);
        }

}

/*function to append the element at the end of the array list*/
void append(struct Array *arr)
{
    int append;
    printf("\nEnter the element to append at the end of the list: ");
    scanf("%d",&append);
    arr->array[arr->length]=append;
    arr->length++;
    display(arr);

}

/*function to insert the new element at the given index*/
void insert(struct Array *arr)
{
    int index,element;
    printf("\nEnter the index value where elements has to be inserted: ");
    scanf("%d",&index);
    printf("\nEnter the element: ");
    scanf("%d",&element);
    for(int i=arr->length;i>index;i--)
    {
        arr->array[i]= arr->array[i-1];
    }
    arr->array[index]=element;
    arr->length++;
    display(arr);
}

/*function to delete the existing element from the given index in a array*/
void deleteIndex(struct Array *arr)
{
    int index,element;
    printf("\nEnter the index value & element to be deleted: ");
    scanf("%d %d",&index,&element);
    if(index>=0 && index<arr->length)
    {
        printf("\nIt is a Valid index!!");
    }
    else
    {
        printf("\n Invalid Index??");
        printf("\n Enter the valid index i.e less than %d",arr->length);
        exit(0);
    }

    for(int i=index;i<arr->length-1;i++)
    {
        arr->array[i]= arr->array[i+1];
    }
    printf("\n The index value %d and element %d is removed sucessfully!!!!!",index,element);
    arr->length--;
    display(arr);
}

/*function to search the given element in an array using linear search*/
void linearSearch(struct Array *arr)
{
    int search,success;
    printf("\n Enter the search element: ");
    scanf("%d",&search);
    for(int i=0;i<(arr->length);i++)
    {
        if(search==(arr->array[i]))
        {
            success=1;
            break;
        }
    }
    if(success == 1)
        printf("\n----------search found successfully!!-----------");
    else
        printf("\n  XX----search Unsuccessfull------XX ");


}

/*function to search the given element in an array using Binary search*/
/*NOTE: The array Elements should be sorted */
void binarySearch(struct Array *arr)
{
    int search,success,low=0,high=arr->length,mid;
    printf("\n Enter the search element: ");
    scanf("%d",&search);
    while(low<=high)
    {
        mid=(low+high/2);
        if(arr->array[mid] == search)
        {
            success=1;
            break;
        }
        else if(search > arr->array[mid])
            low=mid+1;
            else
            high=mid-1;
    }
     if(success == 1)
        printf("\nsearch found successfully!!\n");
    else
        printf("\n  XX--search Unsuccessfull--XX \n");

}

/*function to implement some Basic fuction like Get(),Max(),Min(),Sum(),Avg()*/
void basicOperation(struct Array *arr)
{
    int index,max=arr->array[0],min=arr->array[0],sum=0;
    float average;
    printf("\n Get the element present at the particular given index");
    printf("\nEnter the index: ");
    scanf("%d",&index);
    printf("\n%d is the element present at %d index",arr->array[index],index);
    for(int i=1;i<arr->length;i++)
    {
        if(arr->array[i]>max)
        {
            max=arr->array[i];
        }
    }
    printf("\n%d is the maximum element present in the given Array",max);
     for(int i=1;i<arr->length;i++)
    {
        if(arr->array[i]<min)
        {
            min=arr->array[i];
        }
    }
    printf("\n%d is the minimum element present in the given Array",min);
    for(int i=0;i<arr->length;i++)
    {
            sum=sum+arr->array[i];
    }
    printf("\n %d is the sum of all the elements present in Array",sum);
    average=sum/arr->length;
    printf("\n %f is the Average of all the elements present in Array",average);
}
/*function to Reverse the given Array*/
void reverse(struct Array *arr)
{
    int array1[arr->length],i,count;
    for(int j=arr->length-1,i=0;j>=0;j--,i++)
    {
        array1[i]=arr->array[j];
        count++;
    }
    printf("\nReversed Array is as fallow: ");
    for(int i=0;i<count;i++)
    {
        printf("%d\t",array1[i]);
    }
    /*int i,j,temp;
    for(i=0,j=arr->length-1;i>j;i++,j--)
    {
        temp=arr->array[i];
        arr->array[i]=arr->array[j];
        arr->array[j]=temp;
    }
    printf("\nReversed Array is as fallow: ");
     for(int i=0;i<arr->length;i++)
        printf("%d\t ",arr->array[i]);*/


}
/*function to shift the array element either left or right*/
void shift(struct Array *arr)
{
    int choice;

    while(1)
    {
    printf("\nPress 1 for Left shift operation: ");
    printf("\nPress 2 for Right shift operation: ");
    printf("\nPress 3 to Exit: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("\nLeft shift operation: ");
                for(int i=0;i<arr->length;i++)
                    arr->array[i]=arr->array[i+1];
                for(int i=0;i<arr->length;i++)
                    printf("%d\t",arr->array[i]);
                    break;
        case 2: printf("\nRight shift operation: ");
                for(int i=arr->length-1;i>=0;i--)
                    arr->array[i]=arr->array[i-1];
                for(int i=0;i<arr->length;i++)
                    printf("%d\t",arr->array[i]);
                    break;
        case 3: printf("\nBYE");
                exit(0);
        default: printf("\n Invalid choice!!");
                    break;

    }
    }

}
/*function to rotate the given array left or right*/
void rotate(struct Array *arr)
{
    int choice,first,last;

    while(1)
    {
    printf("\nPress 1 for Left rotate operation: ");
    printf("\nPress 2 for Right rotate operation: ");
    printf("\nPress 3 to Exit: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("\nLeft rotate operation: ");
                first=arr->array[0];
                for(int i=0;i<arr->length;i++)
                    arr->array[i]=arr->array[i+1];
                arr->array[arr->length-1]=first;
                for(int i=0;i<arr->length;i++)
                    printf("%d\t",arr->array[i]);
                    break;
        case 2: printf("\nRight rotate operation: ");
                last=arr->array[arr->length-1];
                for(int i=arr->length-1;i>=0;i--)
                    arr->array[i]=arr->array[i-1];
                arr->array[0]=last;
                for(int i=0;i<arr->length;i++)
                    printf("%d\t",arr->array[i]);
                    break;
        case 3: printf("\nBYE");
                exit(0);
        default: printf("\n Invalid choice!!");
                    break;

    }
    }


}


/*main function from where the program execution begins*/
int main()
{
    struct Array arr; //structure variable declaration to allocate memory to structure..
    int n,choice;
    printf("\nEnter the size of the Array: ");
    scanf("%d",&arr.size);
    arr.array=(int *)malloc(arr.size*sizeof(int));
    printf("\nEnter the no of array elements: ");
    scanf("%d",&n);
    printf("Enter the %d array elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr.array[i]);
    }
    arr.length=n;
    display(&arr);
    while(1)
    {
    printf("\n----------Perform Various Operation on the given Array----------");
    printf("\nPress 1 to append element");
    printf("\nPress 2 to insert element");
    printf("\nPress 3 to deleteIndex element");
    printf("\nPress 4 to  liner Search");
    printf("\nPress 5 to Binary Search");
    printf("\nPress 6 to Basic Operation");
    printf("\nPress 7 to reverse Array");
    printf("\nPress 8 to Shift Array element");
    printf("\nPress 9 to Rotate Array element\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: append(&arr);
                break;
        case 2:  insert(&arr);
                break;
        case 3:  deleteIndex(&arr);
                break;
        case 4: linearSearch(&arr);
                break;
        case 5: binarySearch(&arr);
                break;
        case 6: basicOperation(&arr);
                break;
        case 7: reverse(&arr);
                break;
        case 8: shift(&arr);
                break;
         case 9: rotate(&arr);
                break;
        default: printf("\n Invalid choice???");
                break;

    }
}

return 0;
}
