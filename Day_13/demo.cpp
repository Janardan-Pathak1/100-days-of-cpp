#include <iostream>

using namespace std;

int main() {

  string name = "Pizza";
  string *ptr = &name; // is pointing to the address of variable name. Note that
                       // the type of the pointer has to match the type of the
                       // variable you're working with.
  cout << name << endl;
  cout << &name << endl; // will return the address of variable name
  cout << ptr << endl;

  return 0;
}
