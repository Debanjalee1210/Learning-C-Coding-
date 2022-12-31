#include<stdio.h>

int findSetBits(int);
int countSetbits(int);

int main()
{
    int N,counter=0;
    printf("Enter the number N:");
    scanf("%d",&N);
    counter = findSetBits(N);
    printf("The count of set bits from 1 to N = %d\n",counter);
    return 0;
}

int countSetBits(int num)
{
    printf("The number of set bit in %d ",num);
    int c = 0;
    while(num>=1)
    {
        if((num&1)==1)
        {
            c++;
        }
        num = num>>1;
    }
    printf("is %d\n",c);
    return c;
}

int findSetBits(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        count = count + countSetBits(i);
    }
    return count;
}
