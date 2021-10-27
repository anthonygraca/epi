#include "src/main/data-structures-and-algorithms/primitive-types/closest-integer-same-weight.h"

#include "gtest/gtest.h"

TEST(ClosestIntegerSameWeight, FirstExample) {
  epi::ClosestIntegerSameWeight algo;
  ASSERT_EQ(4, algo.closestIntSameBitCount(92));
}