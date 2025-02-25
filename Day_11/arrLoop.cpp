#include <iostream>

using namespace std;

int main() {

  string cars[4] = {"Jaguar", "Volvo", "bmw", "Mazda"};
  for (int i = 0; i < 4; i++) {
    cout << cars[i] << endl;
  }

  for (string element : cars) {
    cout << element << endl;
  }

  return 0;
}
