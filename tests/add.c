#include "minunit.h"
#include "add.h"
#include <stdlib.h> /* exit() */
#include <stdio.h> /* perror(), printf(), fprintf() */


int tests_run=0;

char * test_add_fail() {
  mu_assert("add(1,2) must produce 4", add(1,2) == 4);
  return 0;
}

char * test_add_sucess() {
  mu_assert("add(1,2) must produce 3", add(1,2) == 3);
  return 0;
}

char * all_tests() {
  printf("1..2\n");
  mu_run_test("test_add_fail", test_add_fail);
  mu_run_test("test_add_sucess", test_add_sucess);
  return 0;
}

int main(int argc, char *argv[])
{
  char *result = all_tests();
  if (result) {
    printf("# FAILURE\n");
  }
  printf("#ALL TESTS PASSED\n");


  return 0; /* tap tests report failures via stdout not exit code */
}
