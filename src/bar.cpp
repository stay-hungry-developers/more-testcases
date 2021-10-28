#include <iostream>
#include "bar.hpp"

using namespace std;

CBar::CBar() {
  std::cout << "CBar ctor" << std::endl;
}

CBar::~CBar() {
  cout << "CBar dtor" << endl;
}

double CBar::SayHi() {
  return 0.3;
}


