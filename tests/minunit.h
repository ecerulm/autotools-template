#ifndef MINUNIT_H
#define MINUNIT_H

extern int tests_run;
#define mu_assert(message,test) do { if (!(test)) return message; } while (0)
#define mu_run_test(test) do { char *result = test(); tests_run++; if (result) return result; } while (0)

#endif /* MINUNIT_H */
