#include <stdio.h>

int main()
{
  int sample[100] = {1}; //samo prvi element definisan, svi ostalo automatski 0
  for(int i = 0; i < 100; ++i)
    printf("%d\n", sample[i]);

    printf("\n");

  int sample2[100] = {[2]=4234, [69]=2432}; //dodeljivanje pojedinacnog elementa
  for(int j = 0; j < 100; ++j)
    printf("%d\n", sample2[j]);
  return 0;
}
