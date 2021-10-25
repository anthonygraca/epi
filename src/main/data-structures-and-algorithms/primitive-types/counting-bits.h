#ifndef ELEMENTS_OF_PROGRAMMING_INTERVIEWS_DATA_STRUCTURES_AND_ALGORITHMS_PRIMITIVE_TYPES_COUNTING_BITS_H_
#define ELEMENTS_OF_PROGRAMMING_INTERVIEWS_DATA_STRUCTURES_AND_ALGORITHMS_PRIMITIVE_TYPES_COUNTING_BITS_H_

#include <vector>

namespace epi {
class CountingBits {
public:
  int countBits(uint32_t n) {
    int count{0};
    while (n >= 1) {
      count += n & 1;
      n = n >> 1;
    }
    return count;
  }
};
} // namespace epi

#endif
