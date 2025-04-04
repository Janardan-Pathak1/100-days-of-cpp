#include <iostream>

using namespace std;

class MyClass {
public:
  MyClass() { cout << "Constructor called\n"; }
  ~MyClass() { cout << "Destructor called\n"; }
};

int main() {
  cout << "Entering main\n";
  {
    MyClass obj;
  }
  cout << "Exiting main\n";
  return 0;
}
