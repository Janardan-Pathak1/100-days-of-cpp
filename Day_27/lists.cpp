#include "iostream"
#include <list>

using namespace std;

int main() {
  list<string> cars = {"vovlo", "mazda", "BMW", "ford"};

  cout << endl << cars.front() << endl; // to print the first element
  cout << endl << cars.back() << endl;  // to print the last element

  // changing the element
  cars.front() = "opel";
  cars.back() = "Toyota";

  cout << endl << cars.front() << endl;
  cout << endl << cars.back() << endl;

  cars.push_front("Tesla"); // Add an element at the begining
  cars.push_back("Rolls");  // Add an element at the end

  // Remove list item
  cars.pop_front(); // to delete the front element
  cars.pop_back();  // to delete the last element
                   //

  cout << cars.size() << endl; // to check the size of the list

  return 0;
}
