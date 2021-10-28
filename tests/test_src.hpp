#ifndef MY_TEST_SRC
#define MY_TEST_SRC

#include <gtest/gtest.h>
#include "header.hpp" 

TEST(HelloTest, SayHelloFunc) {
  Cls cls;
  double ret = cls.SayHello();
  EXPECT_EQ(5.4, ret);
}

#endif

