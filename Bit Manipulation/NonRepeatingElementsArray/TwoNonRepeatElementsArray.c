#include <stdio.h>
int (*funcPtr)(int*,int*);
void displayArray(int size,int arrPtr[],void (*findNonRepeatElementsFunc()))
{
    printf("The array entered is :\n");
    for(int j=0;j<size;j++)
    {
        printf("arr[%d]=%d\n",j,arrPtr[j]);
    }   
    findNonRepeatElementsFunc(size,&arrPtr);
    return;
}

void findNonRepeatElements(int Size,int arrPtr[])
{
    int i,j,count=1;
    printf("Function callback\n");
    for(i=0;i<Size;i++)
    {
        for(j=0;j<Size;j++)
        {
            if((arrPtr[i]==arrPtr[j])&& (i!=j))
            {
            printf("Array element is %d\n",arrPtr[i]);
            break;
            }
        }
        /*if completed checking for that element with all elements in the array*/
        if(j==Size)
        {
        printf("Non Repeating array element[%d] is %d\n",count,arrPtr[i]);
        ++count;
        }
    }
  return;  

}

int main()
{
    int i,arrSize;
    printf("Enter the size of array :");
    scanf("%d",&arrSize);
    int arr[arrSize];
    printf("Enter the array elements:");
    for(i=0;i<arrSize;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    funcPtr = &findNonRepeatElements;
    //displayArray(arrSize,&arr[0],(*funcPtr));
    findNonRepeatElements(arrSize,&arr[0]);



    //printf("Enter the numbers:");

    return 0;
}