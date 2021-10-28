#ifndef MY_TEST_FOO
#define MY_TEST_FOO

#include <gtest/gtest.h>
#include "foo.hpp" 

TEST(HelloTest, SayHolaFunc) {
  CFoo foo;
  double ret = foo.SayHola();
  EXPECT_EQ(0.5, ret);
}

#endif

