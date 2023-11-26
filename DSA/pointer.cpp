// #include <iostream>
// #include <string.h>
// using namespace std;
// void emailToken(char *email)
// {
//     char kq[100];
//     char *p = strtok(email, " ");
//     while (p != NULL)
//     {
//         if (p[0] >= 97 && p[0] <= 122)
//             p[0] = p[0] - 32;
//         // cout << p << endl;
//         strcat(kq, p);
//         strcat(kq, " ");
//         p = strtok(NULL, " ");
//     }
//     cout << kq;
// }
// int main()
// {
//     int a=5;
//     int *p = &a;
//     cout<<p<<endl;
//     cout<<*p<<endl;
// }



// // sai

// #include <stdio.h>

// //Ở đây chúng ta sẽ viết hàm truyền vào là 

// int * timSoLonNhat(int x, int y)
// {
//    if(x>y)
//    {
//        return &x;     // trả về 1 địa chỉ 
//    }
//    else
//    {
//        return &y; // trả về 1 địa chỉ
//    }
// }

// int main()
// {
//    int *result;
//    int a = 11;
//    int b = 15;
//    result = timSoLonNhat(a,b); // truyền vào giá trị của a và b
//    printf("So lon nhat = %d\r\n",*result);
//    return 0;
// }
// Kết quả: 
// Segmentation fault (core dumped)


// #include <stdio.h>

// // Ở đây chúng ta sẽ viết hàm truyền vào là

// int *timSoLonNhat(int *x, int* y)
// {
//     if (*x > *y)
//     {
//         return x; // trả về 1 địa chỉ
//     }
//     else
//     {
//         return y; // trả về 1 địa chỉ
//     }
// }

// int main()
// {
//     int *result;
//     int a = 11;
//     int b = 15;
//     result = timSoLonNhat(&a, &b); // truyền vào giá trị của a và b
//     printf("So lon nhat = %d\r\n", *result);
//     return 0;
// }


// p2p
#include <stdio.h>

int main() {

   int value = 100;
   int *ptr = &value;
   int **p_to_p = &ptr;

   printf("value = %d\r\n",value);
   printf("&value = %p\r\n",&value);
   
   printf("*ptr = %d\r\n",*ptr);
   printf("ptr = %p\r\n",ptr);
   printf("&ptr = %p\r\n",&ptr);


   printf("p_to_p = %p\r\n",p_to_p); //địa chỉ ô nhớ của ptr
   printf("*p_to_p = %p\r\n",*p_to_p); //địa chỉ ô nhớ mà ptr trỏ đến
   printf("**p_to_p = %d\r\n",**p_to_p); //giá trị tại địa chỉ ô nhớ ptr trỏ đến

   return 0;
}