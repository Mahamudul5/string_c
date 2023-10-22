#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int ComValue = strcmp(a, b);
    if (ComValue == 0)
    {
        printf("String Are Same\n");
    }
    else if (ComValue < 0)
    {
        printf("A Is Small\n");
    }
    else
    {
        printf("B Is Small\n");
    }

    return 0;
}