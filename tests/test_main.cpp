#include <gtest/gtest.h>
#include <iostream>
#include "test_bar.hpp"
#include "test_foo.hpp"
#include "test_src.hpp"
#include "test_cstack.hpp" 

TEST_F(CStackTest, IsInitiallyOne) {
  EXPECT_EQ(m_stack.size(), 1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
