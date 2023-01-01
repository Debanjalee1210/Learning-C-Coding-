#include <stdio.h>
//#include <string.h>

int str_len(char *st)
{
    printf("The length of string <%s> is ",st);
    int len = 0;
    while(*st!='\0')
    {
        len++;
        st++;
    }
    printf("%d\n",len);
    return len;
}

void reverseString(char *string)
{
    int i,length;
    char temp,*start,*end;
    length = str_len(string);
    start = string;
    end = string;

    for(i=0;i<length-1;i++)
    end++;

    for(i=0;i<length/2;i++)
    {
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--; 
    }

    return;
}

int main()
{
    char str[100];
    printf("Enter the string to reverse:");
    scanf("%s",str);
    //printf("Checking length by strlen() is %d\n",strlen(str));
    reverseString(str);
    printf("The reverse string is %s\n",str);
    return 0;
}