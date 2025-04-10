#include <iostream>
#include <stack>

using namespace std;

int main() {

  stack<string>
      cars; // We cannot add elements at the time of declaration in stack
  cars.push("Mazda");
  cars.push("Volvo");
  cars.push("Tesla");

  cout << cars.top() << endl;
  cars.pop(); // deleting the top

  cout << cars.top() << endl;

  cout << cars.size() << endl; // to print the size of the stack

  cout << cars.empty(); // to check if its empty or not

  return 0;
}
