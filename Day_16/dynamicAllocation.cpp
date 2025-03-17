#include "iostream"

using namespace std;

int main() {

  int *ptr = NULL;
  ptr = new int; // dynamic memory allocation
  *ptr = 25;     // static allocation

  cout << ptr << endl;
  cout << *ptr << endl;

  return 0;
}
