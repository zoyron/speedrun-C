#include <stdio.h>
int main(){
  int x,y;
  printf("enter 2 integers\n");
  printf("Integer 1: ");
  scanf("%i", &x);
  printf("Integer 2: ");
  scanf("%i", &y);
  if(x < y)
    printf("x is lesser than y");
  else if(x > y)
    printf("x is greater than y");
  else
   printf("x and y are equal");
  return 0;
}


