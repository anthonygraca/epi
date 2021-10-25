#ifndef EPI_SRC_MAIN_DATA_STRUCTURES_AND_ALGORITHMS_PRIMITIVE_TYPES_PARITY_H_
#define EPI_SRC_MAIN_DATA_STRUCTURES_AND_ALGORITHMS_PRIMITIVE_TYPES_PARITY_H_

/*
 * The parity of a binary word is 1 if the number of 1s in the word is odd;
 * otherwise, it is 0. For example, the parity of 1011 is 1, and the parity of
 * 10001000 is 0. Parity checks are used to detect single bit errors in data
 * storage and communication. It is fairly straightforward to write code that
 * computes the parity of a single 64-bit word.
 */

#include <cstdint>

namespace epi {
class Parity {
public:
  int parity(uint32_t n) {
    int count{0};
    while(n >= 1) {
      count += n & 1;
      n = n >> 1;
    }
    return count % 2;
  }
};
} // namespace epi

#endif
