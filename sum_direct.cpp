#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

#include "sums.h"

// make it into a program 
void 
setup(int64_t N, double A[])
{
   printf(" inside direct_sum problem_setup, N=%lld \n", N);
   for (int64_t i = 0; i < N; ++i) {
        A[i] = static_cast<double>(lrand48() % N);
    }
   // update the code here and build your setup function [] so that double sum function works well 

}

double sum(int64_t N, double A[]) {
    printf(" inside direct_sum perform_sum, N=%lld \n", N);
    double total = 0.0;
    for (int64_t i = 0; i < N; ++i) {
        total += A[i];
    }
    return total;
}


