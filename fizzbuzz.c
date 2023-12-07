#include<stdio.h>

int main()
{
  printf("fizzbuzzgame!"\n);
  for(int i=0;i<50;i++){
    if(i%3==0)
      printf("fizz!"\n);
    if(i%5==0)
      printf("buzz!"\n);
    if(i%3==0 && i%5==0)
      printf("fizzbuzz!"\n);
  }
  return 0;
}

