#include<stdio.h>

int main()
{
  int a = 420;
  float b = 42;
  double c = 700;
  char d = 'A';
  unsigned int e = 78;
  short int f = 35;

  // print value and size of an int variable
  printf("int a value %d and size %d bytes.\n", a, a, a, sizeof(a));
  printf("float b balue %f and size %d bytes.\n", b, b, b, sizeof(b));
  printf("double c value %f and size %d bytes.\n", c, c ,c, sizeof(c));
  printf("char d value %c and size %d bytes.\n", d, d, d, sizeof(d));
  printf("unsigned int e value %d and size of %d bytes.\n", e, e, e, sizeof(e));
  printf("short int f value %d and size of %d bytes.\n", f, f, f, sizeof(f));
}


