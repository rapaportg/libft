#include <stdio.h>
#include "../ft_strcpy.c"
#include <string.h>

void Test1()
{
  char *s = "Hello, World";
  char d[100];
 
  printf("Basic Functionality Test: ft_strcpy\n");
  ft_strcpy(d,s);
  printf("Src String: %s\nDst String: %s\n", s,d);
}

void Test2()
{
  char *s = "Hello, World";
  char *d = "12345";

  printf("Edge Case, dst smaller than src: ft_strcpy\n");
  if (!ft_strcpy(d,s))
    printf("Dst is smaller than src returned NULL\n");
  else
    printf("Src String: %s\nDst String: %s\n", s,d);
}

int main()
{
  Test1();
    
  Test2();
  
  return 0;
}