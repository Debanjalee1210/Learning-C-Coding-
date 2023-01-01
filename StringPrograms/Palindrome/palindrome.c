#include <stdio.h>
#include <stdbool.h>

int str_len(char *st)
{
    int len = 0;
    while(*st!='\0')
    {
        len++;
        st++;
    }
    return len;
}

bool CompareString(char *orgStr,int len)
{
    int i;
    for(i=0;i<len-1;i++)
    {
        if(*(orgStr+i)!=*(orgStr+len-1))
        return 0;
        else
        return 1;
    }

}

int main()
{
    int len;
    bool flag;
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    len = str_len(str);
    flag = CompareString(str,len);
    if(flag)
    printf("<%s> is a palindrome\n",str);
    else
    printf("<%s> is not a palindrome\n",str);
    return 0;
}
