#include <stdio.h>
#include <stdlib.h>
int func1(void);
int func2(void);
int main(int argc, char *argv[])
{
  printf("Inside main()\n");
  printf("Calling func1()\n");

  if (func1())
  {
    printf("Everything is OK from func1()\n");
    printf("Return with 0 from main - OK\n");
  }
  else
  {
    printf("Caught an error from func1()\n");
    printf("Return with 1 from main - ERROR\n");
    return 1;
  }
  return 0;
}
int func1(void)
{
  printf("Inside func1()\n");
  printf("Calling func2()\n");
  if (func2())
  {
    printf("Everything is OK from func2()\n");
    exit(0);
  }
  else
  {
    printf("Caught an error from func2()\n");
    exit(1);
  }
}
int func2(void)
{
  printf("Inside func2()\n");
  printf("Returning with 0 from func2()\n");
  return 0;
}