#include <iostream>
#include "mystack.hpp"

CStack::CStack()
{
  std::cout << "CStack ctor" << std::endl;
}
  

CStack::~CStack()
{
  std::cout << "CStack dtor" << std::endl;
}


void CStack::push(int element)
{
  m_vec.push_back(element);
}
  

int CStack::pop()
{
  int ret = m_vec[m_vec.size()-1];
  m_vec.pop_back();

  return ret;
}
  

size_t CStack::size()
{
  return m_vec.size();
}

