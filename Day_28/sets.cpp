#include <functional>
#include <iostream>
#include <set>
using namespace std;

int main() {

  set<string> cars = {"volvo", "BMW", "Mazda", "Tesla"};
  set<int> number = {5, 7, 6, 95, 10};
  for (int num : number) {
    cout << num << endl;
  }

  // printing the set in descending order
  set<int, greater<int>> numbers = {1, 2, 3, 4, 5, 6};

  for (int num : numbers) {
    cout << endl << num << endl;
  }

  return 0;
}
