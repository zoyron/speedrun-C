#include <stdio.h>

void meow() { printf("meow!\n"); }

int main() { int i = 4; 
while(i--){
    meow();
  }
}
