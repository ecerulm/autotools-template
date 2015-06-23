#include "minunit.h"
#include "add.h"
#include <stdlib.h> /* exit() */
#include <stdio.h> /* perror(), printf(), fprintf() */


int tests_run=0;

char * add_test() {
  mu_assert("add(1,2) must produce 3", add(1,2) == 4);
  return 0;
}

char * all_tests() {
  mu_run_test(add_test);
  return 0;
}

int main(int argc, char *argv[])
{
  char *result = all_tests();
  if (result) {
    printf("FAILURE\n");
    exit(1);
  }
  printf("ALL TESTS PASSED");


  return 0;
}
