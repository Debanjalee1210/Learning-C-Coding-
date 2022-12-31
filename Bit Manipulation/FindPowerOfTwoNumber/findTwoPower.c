#include<stdio.h>
#include<stdbool.h>

void isPowerOfTwoMethod1(int n)
{
    if((n&(n-1))!=0)
    {
        printf("NOT a power of 2\n");
    }
    else
    {
    printf("YES a power of 2\n");
    }
    return;
}

bool isPowerOfTwoMethod2(int N)
{
    if(N==0)
    {
        printf("No Invalid\n");
        return 0;
    }
    while(N!=1)
    {
        if((N%2)!=0)
        return 0;
        N=N/2;
    }
    printf("YES a power of Two\n");
    return 1;

}

int main()
{
    int num,option;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the method to use(1 or 2):");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        isPowerOfTwoMethod1(num);
        break;

        case 2:
        isPowerOfTwoMethod2(num)? printf("Yes\n") : printf("No\n");
        break;

        default:
        printf("Enter the option correctly\n");
    }
    
    return 0;
}