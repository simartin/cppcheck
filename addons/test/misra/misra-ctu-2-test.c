// Test with command:
// ./cppcheck --addon=misra --inline-suppr addons/test/misra/misra-ctu-*-test.c

#include "misra-ctu-test.h"

MISRA_2_3_B  misra_2_3_b;

x = MISRA_2_5_OK_2;

// cppcheck-suppress misra-c2012-5.6
typedef int MISRA_5_6_VIOLATION;
static MISRA_5_6_VIOLATION misra_5_6_x;

// cppcheck-suppress misra-c2012-5.7
struct misra_5_7_violation_t {
    int x;
};
static misra_5_7_violation_t misra_5_7_var;

// cppcheck-suppress misra-c2012-5.8
static int misra_5_8_var;
// cppcheck-suppress misra-c2012-5.8
void misra_5_8_f(void) {}

