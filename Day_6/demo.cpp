// Loops in C++

#include <iostream>

using namespace std;

int main() {
  int a = 0;
  while (a < 10) {
    cout << " Hello " << a << endl;
    a++;
  }

  for (int i = 0; i < 10; i++) {
    cout << " Hello " << i << endl;
  }
  do {
    cout << " Hello " << a << endl;
    a++;
  } while (a < 10);
  return 0;
}
