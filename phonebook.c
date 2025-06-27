#include <stdio.h>
#include <string.h>

typedef struct  {
  char *name;
  char *numbers;
}person;

int main() {
  person people[3]; // making an array of length 3, the datatype of the array is " struct person"
  people[0].name = "Sagar";
  people[0].numbers = "7838387677";

  people[1].name = "Shubham";
  people[1].numbers = "8800715420";

  people[2].name = "Srishti";
  people[2].numbers = "8506020300";

  char name[100];
  printf("Enter a name that you want to find: ");
  scanf("%s", name);
  for (int i = 0; i < 3; i++) {
    if (strcmp(people[0].name, name) == 0) {
      printf("Found %s\n", people[i].numbers);
      return 0;
    }
  }
  printf("Not found!\n");
  return 0;
}
