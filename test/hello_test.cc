#include <gtest/gtest.h>
#include "main/hello-greet.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, GetGreet) {
  EXPECT_EQ(get_greet("Bazel"), "Hello Bazel");
}

TEST(HelloTest, GetGreetAgain) {
  EXPECT_EQ(get_greet("WORLD"), "Hello WORLD");
}
