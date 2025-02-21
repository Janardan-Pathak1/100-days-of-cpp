#include <iostream>
using namespace std;

int globalVar = 10; // Global Scope

void example() {
  int localVar = 5; // Local Scope
  static int staticVar =
      0; // Static Scope (retains value across function calls)

  staticVar++;
  cout << "Local Variable: " << localVar << endl;
  cout << "Static Variable: " << staticVar << endl;
}

int main() {
  example();
  example();
  cout << "Global Variable: " << globalVar << endl;
  return 0;
}
