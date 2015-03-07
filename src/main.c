#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>
#include "common.h"

int main(int argc, char *argv[])
{
  printf ("Hello world\n");
  printf ("PACKAGE " PACKAGE "\n");
  printf ("PACKAGE_BUGREPORT " PACKAGE_BUGREPORT "\n");
  printf ("PACKAGE_NAME "PACKAGE_NAME "\n");
  printf ("PACKAGE_STRING " PACKAGE_STRING "\n");
  printf ("PACKAGE_TARNAME " PACKAGE_TARNAME "\n");
  return 0;
}
