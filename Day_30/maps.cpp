#include "iostream"
#include <map>

using namespace std;

int main() {
  map<string, int> people = {
      {"John", 32}, {"Adele", 45}, {"Bo", 29}}; // similar to dict in python
  // Get the value associated with the key "John"
  cout << "John is: " << people["John"] << "\n";

  // Get the value associated with the key "Adele"
  cout << "Adele is: " << people["Adele"] << "\n";

  cout << "Adele is: " << people.at("Adele") << "\n";

  people["John"] = 50;

  cout << "John is: " << people["John"];

  // Try to access an element that does not exist (will throw an exception)
  // cout << people.at("Jenny"); will return error

  // Add new elements
  people["Jenny"] = 22;
  people["Liam"] = 24;
  people["Kasper"] = 20;
  people["Anja"] = 30;

  // Add new elements
  people.insert({"Jenny", 22});
  people.insert({"Liam", 24});
  people.insert({"Kasper", 20});
  people.insert({"Anja", 30});

  // Remove an element by key
  people.erase("John");
  cout << endl << people.size(); // Outputs 6

  for (auto person : people) {
    cout << person.first << " is: " << person.second << "\n";
  }
  // Remove all elements
  people.clear();

  return 0;
}
