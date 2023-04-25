#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("%S", "No special.");
    printf("hi\n");
    _printf("%S", "\n");
    printf("hi\n");
    _printf("%S", "\x01\x02\x03\x04");
    printf("hi\n");
    _printf("could you print non-print?\n%S\nthanks!\n","sure:\x1F\x7F\n");
    _printf("");
    _printf("...what say?\n- %S\n- that.\n","");
    
    return (0);
}