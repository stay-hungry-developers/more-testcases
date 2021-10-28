#ifndef MY_TEST_BAR
#define MY_TEST_BAR

#include <gtest/gtest.h>
#include "bar.hpp" 

TEST(HelloTest, SayHiFunc) {
  CBar bar;
  double ret = bar.SayHi();
  EXPECT_EQ(0.3, ret);
}

#endif

