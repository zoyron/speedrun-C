#include <stdio.h>

void meow(void);
int main() {
  int i = 4;
  while (i--) {
    meow();
  }
  return 0;
}


void meow(void) { printf("meow!\n"); }
