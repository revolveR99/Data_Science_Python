#include    <unistd.h>
int main(void)
{
   char  c = 'z';
   char *x;
 
   x = &c;
  *x = 'a';
   write(1, &c, 1);
   return(1);
}
