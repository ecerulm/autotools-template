#include <glib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "common.h"

typedef struct {
  int a; /* usually some other data structure that you
          * need for your tests */
} dfixture;

void my_setup(dfixture *df, gconstpointer test_data) {
  /* here goes the code to setup fixture */
}

void my_teardown(dfixture *df, gconstpointer test_data) {
  /* here goes the code to free/cleanup fixture */
}

void my_first_test(dfixture *df, gconstpointer ignored) {
  /* g_assert(false); */
  g_assert(true);
}

void my_second_test(dfixture *df, gconstpointer ignored) {
  g_test_fail();
}

void my_third_test(dfixture *df, gconstpointer ignored) {
  myfunc();
  g_test_incomplete("incomplete means that there is some functionality missing");
}

void my_fourth_test(dfixture *df, gconstpointer ignored) {
  g_test_skip("skipped because doesn't apply to GNU/Linux systems");
}

int main(int argc, char *argv[])
{
  /* https://developer.gnome.org/glib/stable/glib-Testing.html */
  g_test_init(&argc, &argv, NULL);
  g_test_add("/set0/my first test", /* type fixture*/ dfixture, /*tdata*/NULL, /*fsetup*/ my_setup, my_first_test, my_teardown);
  g_test_add("/set0/my second test", /* type fixture*/ dfixture, /*tdata*/NULL, /*fsetup*/ my_setup, my_second_test, my_teardown);
  g_test_add("/set0/my third test", /* type fixture*/ dfixture, /*tdata*/NULL, /*fsetup*/ my_setup, my_third_test, my_teardown);
  g_test_add("/set0/my fourth test", /* type fixture*/ dfixture, /*tdata*/NULL, /*fsetup*/ my_setup, my_fourth_test, my_teardown);
  g_test_run();
  return 0;
}
