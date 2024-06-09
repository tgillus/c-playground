#include "first.c"
#include <stdio.h>

struct User {
  char *name;
  int power;
};

int main() {
  struct User user = { "Goku", 9001 };

  printf("Hello, World!\n");
  printf("%s's power is %d\n", user.name, user.power);
  printf("%d", sum(1, 3));

  return 0;
}
