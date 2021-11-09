#include "src/main/data-structures-and-algorithms/primitive-types/product-without-arithmetical-operators.h"

#include "gtest/gtest.h"

TEST(ProductWithoutArithmeticalOperators, FirstExample) {
  epi::ProductWithoutArithmeticalOperators algo;
  ASSERT_EQ(6, algo.product(2,3));
}
