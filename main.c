#include "main.h"

int main() {
    char* str1 = "Hello, world!";
    char* str2 = "Hello, \t\x03world!";
    char* str3 = "";
    char* str4 = NULL;
    char str5[] = {'\n', '\r', '\t', '\b', '\x01', '\x7F', '\0'};
    
    _printf("%S\n", str1);
    _printf("%S\n", str2);
    _printf("%S\n", str3);
    _printf("%S\n", str4);
    _printf("%S\n", str5);
    
    return 0;
}
