#ifndef HEADER_H
#define HEADER_H

#ifdef __cplusplus
  #define EXTERN_BEGIN extern "C" {
  #define EXTERN_END }
#else
  #define EXTERN_BEGIN
  #define EXTERN_END
#endif

EXTERN_BEGIN
bool is_prime(int);
bool is_prime_wrapper(int);
EXTERN_END

#endif
