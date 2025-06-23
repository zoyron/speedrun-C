#include <stdio.h>
int main(){
  int x,y;
  printf("enter 2 integers\n");
  printf("Integer 1: ");
  scanf("%i", &x);
  printf("Integer 2: ");
  scanf("%i", &y);
  if(x < y)
    printf("x is lesser than y\n");
  else if(x > y)
    printf("x is greater than y\n");
  else
   printf("x and y are equal\n");
  return 0;
}


