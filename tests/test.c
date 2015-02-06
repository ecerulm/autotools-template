#include <glib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

int main(int argc, char *argv[])
{
  /* https://developer.gnome.org/glib/stable/glib-Testing.html */
  g_test_init(&argc, &argv, NULL);
  g_test_add("/set0/my first test", /* type fixture*/ dfixture, /*tdata*/NULL, /*fsetup*/ my_setup, my_first_test, my_teardown);
  return g_test_run();
}
