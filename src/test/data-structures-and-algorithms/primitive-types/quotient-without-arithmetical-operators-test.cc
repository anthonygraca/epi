#include "src/main/data-structures-and-algorithms/primitive-types/quotient-without-arithmetical-operators.h"

#include "gtest/gtest.h"

TEST(QuotientWithoutArithmeticalOperators, FirstExample) {
  epi::QuotientWithoutArithmeticalOperators algo;
  ASSERT_EQ(6, algo.quotient(2,3));
}
