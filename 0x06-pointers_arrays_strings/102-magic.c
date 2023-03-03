#include <stdio.h>

int main(void)
{
  int n = 1;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(&n + 5) = 98;
  /* ...so that this prints 98\n */
  printf("Address of variable n = %p\n", (void *)&n);
  printf("Address of array a[] = %p\n", (void *)&a[2]);
  printf("Address of pointer p = %p\n", (void *)&p);

  printf("a[2] = %d\n", a[2]);
  return (0);
}
