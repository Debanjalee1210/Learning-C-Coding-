#include <stdio.h>

int flipBitsToConvert(int numA,int numB)
{
    int count=0;
    printf("The numbers are %d %d\n",numA,numB);
    int numXor= numA^numB;
    printf("The value of Xor = %d\n",numXor);
    while(numXor!=0)
    {
        if((numXor&1)==1)
        {
            count++;
           
        }
        numXor=numXor>>1;
    }
    return count;


}


int main()
{
    int num1,num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);

    int bitsFlipped= flipBitsToConvert(num1,num2);
    printf("The number of bits to be flipped = %d\n",bitsFlipped);
    return 0;
}