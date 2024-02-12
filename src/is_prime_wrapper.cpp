#include "header.h"

bool is_prime_wrapper(int n) {
  if (n <= 0) return false;
  return is_prime(n);
}

