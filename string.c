#include <stdio.h>
#include <string.h>
void nhapChuoi(char s[100])
{
    scanf("%s", s);
}
int replace(char s[100])
{
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '3')
        {
            s[i] = 'e';
        }
    }
    printf("%s", s);
}
int countChar(char s[100], char *c)
{
    int m;
    scanf(" %c", c);
    int count = 0, index = -1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == *c)
        {
            count++;
        }
    }
    if (count != 0)
    {
        return count;
    }
    else
    {
        return 0;
    }
}
void transform(char s[100], int c)
{
    int t;
    for (int i = 0; i < strlen(s); i++)
    {
        c = s[i];
        if (c > 96 && c < 123)
        {
            t = c - 32;
        }
        else
        {
            t = c;
        }
        printf("%c", t);
    }
}
void iltransform(char s[100], int c)
{
    int t;
    for (int i = 0; i < strlen(s); i++)
    {
        c = s[i];
        if (c > 64 && c < 91)
        {
            t = c + 32;
        }
        else
        {
            t = c;
        }
        printf("%c", t);
    }
}
void cmp(char s[100], char x[100])
{
    if (strcmp(s, x) == 0)
    {
        printf("two people have the same name");
    }
    else
    {
        printf("two people don't have the same name");
    }
}
void az(char s[100])
{
}
int main()
{
    char s[100], c, x[100];
    nhapChuoi(s);
    //  replace(s);
    int kq = countChar(s, &c);
    if (kq)
    {
        printf("%d", kq);
    }
    else
    {
        printf("-1");
    }
    // transform(s, c);
    // iltransform(s, c);
    // scanf("%s", x);
    // cmp(s, x);
}