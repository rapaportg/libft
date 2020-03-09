#include "../ft_memset.c"
#include "stdio.h"

void Test1()
{
  char str[50] = "abcdefghijklmnopqrstuvwxyz";
  printf("\nMemset Basic Functionality Test 1");
  printf("\nBefore Memset: %s", str);
  ft_memset(str + 5, '*', 5 * sizeof(char));
  printf("\nAfter Memset: %s", str);
}

void Test2()
{
  char str[10] = "1234567890";
  printf("\n\nMemset Basic Functionality Test 2");
  printf("\nBefore memset(): %s", str);
  ft_memset(str+3, '.', 4*sizeof(char));
  printf("\nAfter memset(): %s\n", str);
}

int main()
{
    Test1();
    Test2();
    return (0);
}