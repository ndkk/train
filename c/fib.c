// compile .wasm
// emcc fib.c -O3 -s WASM=1 -s SIDE_MODULE=1 -s EXPORTED_FUNCTIONS='["_fib"]' -o fib.wasm


#include <stdio.h>

int fib(int n) {
  return n <= 1
    ? 1
    : fib(n - 1) + fib(n - 2);
}

