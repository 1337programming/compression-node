#include <iostream>
#include "snappy/snappy.h"

int main() {
  const char* input="hello";
  const char* output="me";
  int inputLength = strlen(input);

  size_t size = snappy::Compress(input, inputLength, output);
  return 0;
}