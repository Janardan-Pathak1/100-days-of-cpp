#include "iostream"

using namespace std;

class MyClass {
public:
  MyClass(string name) { cout << "My name is " << name << endl; }
};

int main() {
  MyClass obj("Janardan");

  return 0;
}
