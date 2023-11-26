#include <stdio.h>
#include <string.h>
int index(char s[])
{
    char *p = strstr(s, "l");
    if (p)
        return (p - s);
    return -1;
}
int nhapChuoiTimKiem(char s[])
{
    char a[10];
    gets(s);
    scanf("%c", a);
    char *p = strstr(s, a);
    if (p)
        return (p - s);
    return -1;
}
void split(char s[])
{
    char date[10], month[10], year[10];
    char *p = strtok(s, "/");
    int i = 0;
    while (p != NULL)
    {
        if (i == 0)
        {
            strcpy(date, p);
        }
        else if (i == 1)
        {
            strcpy(month, p);
        }
        else if (i == 2)
        {
            strcpy(year, p);
        }
        i++;
        p = strtok(NULL, "/");
    }
    printf("date: %s\n", date);
    printf("month: %s\n", month);
    printf("year: %s\n", year);
}
// xóa bỏ khoảng trắng trong chuỗi và in ra chuỗi liền
void removeSpaces(char str[], int index)
{
    for (int i = index; i < strlen(str); i++)
    {
        str[i] = str[i + 1];
    }
}
int main()
{
    char s[] = "Deviot.vn";
    char x[100], d[] = "20/11/2023";
    // printf("index1: %d\n", index(s));
    // printf("index2: %d\n", nhapChuoiTimKiem(x));
    // split(d);
    char str[] = "Deviot hoc that lam that", *p = strstr(str, " ");
    while (p != NULL)
    {
        int index = p - str;
        removeSpaces(str, index);
        // printf("%s\n", str);
        p = strstr(str, " ");
    }
    printf("%s ", str);
}