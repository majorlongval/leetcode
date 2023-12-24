#include <gtest/gtest.h>

#include "../src/leetcode.h"

TEST (LeetCodeTest, BasicAssertions)
{
  EXPECT_STRNE ("hello", "world");

  EXPECT_EQ (7 * 6, 42);
}

TEST (LeetCodeTest, OtherBasicAssertion) { EXPECT_TRUE (true); }

TEST (LeetCodeTest, OtherBasicAssertion2) { EXPECT_FALSE (false); }

TEST (LeetCodeTest, add1) { EXPECT_EQ (add (1, 2), 3); }