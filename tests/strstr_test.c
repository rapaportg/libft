#include <stdio.h>
#include <string.h>
#include "libft.h"

int main ()
{
  char string[55] ="This is a test string for testing";
  char *p;
  p = ft_strstr (string,"test");
  if(p)
  {
    printf("string found\n" );
    printf ("First occurrence of string \"test\" in \"%s\" is"\
           " \"%s\"\n",string, p);
  }
  else printf("string not found\n" );
   return 0;
}