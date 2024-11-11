#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i, length;
    printf("Enter the string:\n");
    gets(str);
    length = strlen(str);
    printf("reverse string: \n");
    for (i = length; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
