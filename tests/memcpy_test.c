#include <stdio.h>
#include <stdlib.h>
#include "../ft_memcpy.c"



void Test1()
{
  char str1[] = "Aliasing meaing pointers that point to the same location in memory";
  char str2[] = "123456789 123456789 123456789 123456789";

  puts("Str1 before memcpy: ");
  puts(str1);

  ft_memcpy(str1, str2, sizeof(str2));
  printf("\n%ld\n", sizeof(str2));

  puts("\nStr1 after memcpy");
  puts(str1);

}

void Test2()
{
  char str1[] = "Aliasing meaing pointers that point to the same location in memory";
  char *str2 = malloc(50);

  puts("Str1 before memcpy: ");
  puts(str1);

  ft_memcpy(str1, str2, sizeof(str2));
  printf("\n%ld\n", sizeof(str2));

  puts("\nStr1 after memcpy");
  puts(str1);
}
 
int main()
{
  Test1();
  Test2();
  return 0;
}