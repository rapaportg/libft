#include "../ft_strcat.c"
#include <stdio.h>

void Test1()
{
  char s1[100] = "Hello World";
  char s2[100] = "My Name is Jeff";

  printf("\nBasic Functionality Test 1");
  printf("\nStr1: %s\nStr2: %s\n", s1, s2);
  printf("\nStr1 + Str2 = %s\n", ft_strcat(s1, s2));
}

void Test2()
{
  char s1[100] = "Hello World";
  char s2[100] = "My Name is Jeff";

  printf("\nBasic Functionality Test 2");
  printf("\nStr1: %s\nStr2: %s\n", s2, s1);
  printf("\nStr1 + Str2 = %s\n", ft_strcat(s2, s1));
}

void Test3()
{
  char s1[100] = "01234";
  char s2[100] = "56789";

  printf("\nBasic Functionality Test 3");
  printf("\nStr1: %s\nStr2: %s\n", s1, s2);
  printf("\nStr1 + Str2 = %s\n", ft_strcat(s1, s2));
}



int main()
{
    Test1();
    Test2();
    Test3();
}