#include "../ft_strrchr.c"
#include <stdio.h>

int main() 
{ 
  char str[] = "This is a string"; 
  char * ch = ft_strrchr(str,'a'); 
  printf("%ld", ch - str +1);
  return 0; 
} 