#include <stdio.h>

void greet(char *str){
  printf("Hello %s!\n", str);
}

int main(void){
  char str[100];
  printf("Enter your name: ");
  scanf("%s", str);
  greet(str);
  return 0;
}
