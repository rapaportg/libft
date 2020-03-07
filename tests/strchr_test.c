#include "../ft_strchr.c"
#include <stdio.h>

int main() 
{ 
    char str[] = "My name is Ayush"; 
    char ch = 'A';
    char ch2 = 'z';
    
    printf("String is: %s\n", str);

    if (ft_strchr(str, ch) != NULL) 
        printf("%c is present in string\n", ch);
    else
        printf("%c is not present in string\n", ch);
    if (ft_strchr(str, ch2) != NULL) 
        printf("%c is present in string\n", ch2);
    else
        printf("%c is not present in string\n", ch2);
    return 0; 
} 