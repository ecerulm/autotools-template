#include <glib.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  g_test_init(&argc, &argv, NULL);
  printf("Write some tests!!! Failing!\n");
  exit(EXIT_FAILURE);
  return 0;
}
