#include <stdio.h>
int setBits(int);
int main()
{
    int num,countSetBits;
    printf("Enter the integer:");
    scanf("%d",&num);
    printf("Given integer is %d\n",num);
    countSetBits=setBits(num);
    printf("Set bits present is %d\n",countSetBits);
    return 0;
}

int setBits(int givenNum)
{
    int count=0;
        while(givenNum>0)
        {
            if((givenNum&1)==1)
            {
                count++;
                printf("bit is set in %d\n",givenNum);
            }   

             givenNum=givenNum>>1;  
                  
        }
    
    return count;

}