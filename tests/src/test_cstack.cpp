#include "test_cstack.hpp" 

CStackTest::CStackTest()
{
}
  
CStackTest::~CStackTest() 
{
}

void CStackTest::SetUp()
{
  m_stack.push(10);
}
  
void CStackTest::TearDown()
{
  m_stack.pop();
}
