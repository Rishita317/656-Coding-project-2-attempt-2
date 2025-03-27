#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

#include "sums.h"
#include <cstdio>
// why do we need it #include <cstdio> ?

// TODO done : code here
void setup(int64_t N, double A[]) {
    printf(" inside sum_vector problem_setup, N=%lld \n", N);
    for (int64_t i = 0; i < N; ++i) {
        A[i] = static_cast<double>(i);
    }
}
//TODO done : code here

double sum(int64_t N, double A[]) {
    printf(" inside sum_vector perform_sum, N=%lld \n", N);
    double total = 0.0;
    for (int64_t i = 0; i < N; ++i) {
        total += A[i];
    }
    return total;
}

