#include "main.h"
#include <stdio.h>

int main()
{
    int len, len_p;
    len = printf("1 ~%  h  s world %c", "hello", 'M');
    printf("\n");
    len_p = _printf("1 ~%  h  s world %c", "hello", 'M');
    printf("\nlen: %d len_p: %d\n", len, len_p);
    len =  _printf("2 ~%X\n", -2);
    len_p =  printf("2 ~%X\n", -2);
    printf("\nlen: %d len_p: %d\n", len, len_p);
    len =  _printf("3 ~%X\n", -1024);
    len_p = printf("3 ~%X\n", -1024);
    printf("\nlen: %d len_p: %d\n", len, len_p);
    len =  _printf("4 ~%X\n", UINT_MAX);
    len_p = printf("4 ~%X\n", UINT_MAX);
    printf("\nlen: %d len_p: %d\n", len, len_p);
    len = _printf("5 ~%X\n", INT_MAX);
    len_p = printf("5 ~%X\n", INT_MAX);
    printf("\nlen: %d len_p: %d\n", len, len_p);

    len = _printf("%p\n", "hello");
    len_p = printf("%p\n", "hello");
    printf("%d\n%d",len ,len_p);
    return 0;
}
