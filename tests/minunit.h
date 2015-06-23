#ifndef MINUNIT_H
#define MINUNIT_H

extern int tests_run;
#define mu_assert(message,test) do { if (!(test)) return message; } while (0)
#define mu_run_test(test_name, test) do { printf("# starting test %s\n", test_name); char *result = test(); tests_run++; if (result) {printf("not "); } printf("ok %d - %s\n", tests_run, test_name);} while (0)

#endif /* MINUNIT_H */
