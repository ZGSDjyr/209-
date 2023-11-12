#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int a[] = { 1, 2, 3, 4 };
    int b[] = { 5, 6, 7 };
    int len1 = sizeof(a) / sizeof(a[0]);
    int len2 = sizeof(b) / sizeof(b[0]);
    int len3 = len1 + len2;
    int* c = (int*)malloc(len3 * sizeof(int));
        for (int i = 0; i < len1; i++) 
        {
            c[i] = a[i];
        }
        for (int i = 0; i < len2; i++) 
        {
            c[len1 + i] = b[i];
        }
        printf("ÐÂÊý×é£º");
        for (int i = 0; i < len3; i++) 
        {
            printf("%d ", c[i]);
        }
        free(c);
        return 0;
}