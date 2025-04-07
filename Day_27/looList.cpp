#include "iostream"
#include <list>

using namespace std;

int main() {
  list<string> cars = {"vovlo", "mazda", "BMW", "ford"};

  for (string car : cars) {
    cout << car << endl;
  }

  return 0;
}
