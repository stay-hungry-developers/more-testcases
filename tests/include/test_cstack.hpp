#ifndef MY_TEST_CSTACK
#define MY_TEST_CSTACK

#include <gtest/gtest.h>
#include "mystack.hpp" 

class CStackTest : public ::testing::Test {
protected:
  CStackTest();
  ~CStackTest() override;

  void SetUp() override;
  void TearDown() override;

  CStack m_stack;
};

#endif
