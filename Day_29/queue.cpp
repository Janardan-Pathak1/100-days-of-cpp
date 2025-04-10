#include <iostream>
#include <queue>

using namespace std;

int main() {

  queue<string> cars;

  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");

  cout << cars.front() << endl;
  cout << cars.back() << endl;

  // Change the value of the front element
  cars.front() = "Tesla";

  // Change the value of the back element
  cars.back() = "VW";

  // Access the front element
  cout << cars.front() << endl; // Now outputs "Tesla" instead of "Volvo"

  // Access the back element
  cout << cars.back() << endl; // Now outputs "VW" instead of "Mazda"

  // Remove the front element (Volvo)
  cars.pop();

  // Access the front element (Now BMW)
  cout << cars.front() << endl;

  cout << cars.size() << endl;

  cout << cars.empty(); // Outputs 0  (The queue is not empty)

  return 0;
}
