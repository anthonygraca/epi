#include "src/main/data-structures-and-algorithms/primitive-types/counting-bits.h"

#include "gtest/gtest.h"

#include <vector>

TEST(CountingBits, FirstExample) {
  int n{2};
  epi::CountingBits algo;
  std::vector<int> expected{0,1,1};
  ASSERT_EQ(expected, algo.countBits(n));
}

TEST(CountingBits, DISABLED_SecondExample) {
  int n{5};
  epi::CountingBits algo;
  std::vector<int> expected{0,1,1,2,1,2};
  ASSERT_EQ(expected, algo.countBits(n));
}
