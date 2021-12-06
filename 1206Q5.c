#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input;
    scanf("%c",&input);
    if (isupper(input))
    {
        printf("uppercase\n");
    }
    else if (islower(input))
    {
        printf("lowercase\n");
    }
    else
    {
        printf("special character\n");
    }
}
