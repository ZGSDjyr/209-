#include<stdio.h>
#include<string.h>
int main()
{
    int flag = 1;    
    char c;
    while (1)
    {
        c = getchar();
        if (c == '\n')
            break;
        if ((c >= 'a' && c <= 'z') && flag)   
        {
            printf("%c", c - 32);
        }
        else
            printf("%c", c);
        if (c == ' ')            
            flag = 1;
        else
            flag = 0;
    }
    return 0;
}