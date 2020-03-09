#include "../ft_strchr.c"
#include <stdio.h>

int main() 
{ 
    char str[] = "My name is Ayush"; 
    char ch = 'A';
    char ch2 = 'z';
    char *tmp;
    
    printf("\nft_strchr Test\n\nString is: %s\n", str);

    if ((tmp = ft_strchr(str, ch)) != NULL) 
        printf("%c is present in string\nreturned str: %s\n", ch, tmp);
    else
        printf("%c is not present in string\n", ch);
    if ((tmp = ft_strchr(str, ch2)) != NULL) 
        printf("%c is present in string\nreturned str: %s\n", ch2, tmp);
    else
        printf("%c is not present in string\nReturned Str: %s\n", ch2, tmp);
    return 0; 
} 