#include <stdio.h>
#include <string.h>
// struct student
// {
//     char name[100];
//     float GPA;
//     char student_code[100];
// };
// typedef struct student st;
// void enter(st *a)
// {
//     scanf("%s", a->student_code);
//     getchar();
//     gets(a->name);
//     scanf("%f", &a->GPA);
// }
// void print(st x)
// {
//     printf("%s %s %.2lf\n", x.student_code, x.name, x.GPA);
// }
// int main()
// {
//     int n;
//     printf("nhap n: ");
//     scanf("%d", &n);
//     st a[100];
//     for (int i = 0; i < n; i++)
//         enter(&a[i]);
//     for (int i = 0; i < n; i++)
//         print(a[i]);
// }

// struct student
// {
//     char name[100];
//     double GPA;
//     char student_code[100];
// };

// typedef struct student st;

// void enter(st *x)
// {
//     printf("Enter student_code: ");
//     scanf("%s", x->student_code);

//     printf("Enter name: ");
//     getchar();
//     fgets(x->name, sizeof(x->name), stdin);
//     x->name[strcspn(x->name, "\n")] = '\0'; // Remove trailing newline

//     printf("Enter GPA: ");
//     scanf("%lf", &x->GPA);
// }

// void print(st x)
// {
//     printf("%s %s %.2lf\n", x.student_code, x.name, x.GPA);
// }

// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);

//     st a[100];
//     for (int i = 0; i < n; i++)
//         enter(&a[i]);

//     for (int i = 0; i < n; i++)
//         print(a[i]);

//     return 0;
// }

// struct student
// {
//     char name[100];
//     char student_code[100];
//     float GPA;
// };
// typedef struct student st;
// void enter(st *a)
// {
//     scanf("%s", a->student_code);
//     getchar();
//     gets(a->name);
//     scanf("%f", &a->GPA);
// }
// void print(st a)
// {
//     printf("%s %s %.2f\n", a.student_code, a.name, a.GPA);
// }
// void search(st a[100], int n, char m[100])
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(m, a[i].student_code) == 0)
//         {
//             print(a[i]);
//             return;
//         }
//     }
//     printf("khong tim thay sinh vien vua nhap!");
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     st a[100];
//     for (int i = 0; i < n; i++)
//         enter(&a[i]);
//     for (int i = 0; i < n; i++)
//         print(a[i]);
//     char s[100];
//     printf("\nNhap ma sinh vien can tim kiem: ");
//     scanf("%s", s);
//     search(a, n, s);
// }

struct student
{
    char student_code[100];
    char name[100];
    double GPA;
};
typedef struct student st;
void enter(st *a)
{
    scanf("%s", a->student_code);
    getchar();
    gets(a->name);
    scanf("%lf", &a->GPA);
}
void print(st a)
{
    printf("%s %s %.2lf\n", a.student_code, a.name, a.GPA);
}
void enter_and_print(int n, st(*a))
{
    for (int i = 0; i < n; i++)
        enter(&a[i]);
    for (int i = 0; i < n; i++)
        print(a[i]);
}
void search(st a[100], int n)
{
    char m[100];
    printf("nhap ma sinh vien can tim: ");
    scanf("%s", &m);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(m, a[i].student_code) == 0)
        {
            print(a[i]);
            return;
        }
    }
    printf("khong tim thay sinh vien vua nhap");
}
st search2(st a[100], int n)
{
    double max = -1e19 - 1;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (a[i].GPA > max)
        {
            max = a[i].GPA;
            index = i;
        }
    }
    printf("%s ", a[index].name);
}
int main()
{
    int n;
    st a[100];
    scanf("%d", &n);
    // enter_and_print(n, a);
    int m[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    // printf("nhap ma sinh vien can tim kiem: ");
    // scanf("%s", s);
    // search(a, n);
    // search2(a, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[j] > m[i])
            {
                int tmp = m[j];
                m[j] = m[i];
                m[i] = tmp;
            }
        }
        printf("%d ", m[i]);
    }
}