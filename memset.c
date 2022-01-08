/* memset example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "almost every programmer should know memset!";
  memset (str,'-',6);//void * memset ( void * ptr, int value, size_t num );
  puts (str);
  return 0;
}
