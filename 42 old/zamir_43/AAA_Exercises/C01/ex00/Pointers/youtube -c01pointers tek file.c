#include    <unistd.h>
int main(void)
{
   char     c;
   char *x;
   c = 'z';
   x = &c;
  *x = 'a';
   write(1, &c, 1);
   return(1);
}
