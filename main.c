#include <stdio.h>
#include "euler.h"

int main(int argc, char const *argv[]) {
    int q1 = one(1000);
    int q28 = twenty_eight(1001);
    printf("%d and %d\n", q1, q28);
    return 0;
}
