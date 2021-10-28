#include <gtest/gtest.h>
#include <iostream>
#include "test_bar.hpp"
#include "test_foo.hpp"
#include "test_src.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
