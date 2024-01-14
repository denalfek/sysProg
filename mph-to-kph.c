#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
  char mph[10]={0};
  while (fgets(mph, sizeof(mph), stdin) != NULL)
  {
    if(strspn(mph, "0123456789.-\n") ==
      strlen(mph))
    {
      printf("%.1f\n", (atof(mph)*1.609344));
    }
    else
    {
      fprintf(stderr, "Invalid input\n");
      return 1;
    }
  }
  return 0;
}