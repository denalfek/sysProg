#include <stdio.h>
#include <string.h>
int main(void)
{
  char c[20]={0};
  char newcase[20]={0};
  int i;
  while (fgets(c, sizeof(c), stdin) != NULL)
  {
    for (i=0; i<sizeof(c); i++)
    {
      if ((c[i]>=65)&&(c[i]<=90))
      {
        newcase[i]=c[i]+32;
      }

      if ((c[i]>=97)&&(c[i]<=122))
      {
        newcase[i]=c[i]-32;
      }
    }
    printf("%s\n", newcase);
    memset(c, 0, sizeof(c));
    memset(newcase, 0, sizeof(newcase));
  }
  return 0;
}