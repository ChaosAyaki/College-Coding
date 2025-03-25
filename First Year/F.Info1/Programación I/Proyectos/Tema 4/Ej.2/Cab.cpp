#include "cab.h"

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int combinatorio(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}
