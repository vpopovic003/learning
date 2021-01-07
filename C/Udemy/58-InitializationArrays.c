#include <stdio.h>

int main()
{
  int sample[100] = {1}; //samo prvi element definisan, svi ostalo automatski 0
  for(int i = 0; i < 100; ++i)
    printf("%d\n", sample[i]);
  return 0;
}
