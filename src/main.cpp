#include <iostream>
#include "header.h"

int main() {
  int n;
  std::cin >> n;
  std::cout << n << (is_prime_wrapper(n) ? " is prime" : " is not prime") << std::endl;
  return 0;
}