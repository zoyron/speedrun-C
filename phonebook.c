#include <stdio.h>
#include <string.h>

int main() {
  char *names[] = {"Sagar", "Shubham", "Srishti"};
  char *numbers[] = {"7838387677", "8800715420", "8506020300"};
  char name[100];
  printf("Enter a name that you want to find: ");
  scanf("%s", name);
  for (int i = 0; i < 3; i++) {
    if (strcmp(names[i], name) == 0) {
      printf("Found %s\n", numbers[i]);
      return 0;
    }
  }
  printf("Not found!\n");
  return 0;
}
