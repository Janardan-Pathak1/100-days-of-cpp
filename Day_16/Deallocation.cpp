#include <iostream>

using namespace std;

int main() {

  int *ptr = new int;
  *ptr = 23;

  cout << *ptr << endl;

  delete ptr; // freeing up the memory or deallocation it from memory leak
  return 0;
}
