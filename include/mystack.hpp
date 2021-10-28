#ifndef MY_STACK
#define MY_STACK

#include <vector>

class CStack {
public:
  CStack();
  ~CStack();
  void push(int element);
  int pop();
  size_t size();

private:
  std::vector<int> m_vec;
};

#endif
