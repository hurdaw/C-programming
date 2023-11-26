#include <stdio.h>
#include <string.h>
void daoString(char str[])
{
    printf("%s ", reverseString(str));
}

int main()
{
    char str[100];
    scanf("%s", str);
    daoString(str);
}