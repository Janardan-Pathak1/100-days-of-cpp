#include "iostream"

using namespace std;

int main() {

  string food = "Noodles";
  string *ptr = &food;

  cout << *ptr << endl; // will return the actual data stored in ptr
  return 0;
  // When used in declaration (string* ptr), it creates a pointer variable.
  // When not used in declaration, it act as a dereference operator.
}
