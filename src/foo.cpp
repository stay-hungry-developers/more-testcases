#include <iostream>
#include "foo.hpp"

using namespace std;

CFoo::CFoo() {
  std::cout << "CFoo ctor" << std::endl;
}

CFoo::~CFoo() {
  cout << "CFoo dtor" << endl;
}

double CFoo::SayHola() {
  return 0.5;
}


