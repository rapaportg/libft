#include "stdio.h"
#include "../ft_memcpy.c"
 
 int main()
 {
    char str1[] = "Aliasing meaing pointers that point to the same location in memory";
    char str2[] = "123456789 123456789 123456789 123456789";

    puts("Str1 before memcpy: ");
    puts(str1);

    ft_memcpy(str1, str2, sizeof(str2));

    puts("\nStr1 after memcpy");
    puts(str1);

    return 0;
 }