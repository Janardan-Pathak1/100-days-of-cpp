#include "iostream"

using namespace std;

class MyClass {
public:
  void PublicFunc() { cout << "THis is a public method"; }

private:
  void PrivateFunc() { cout << "This is a private method"; }
};

int main() {
  MyClass obj;

  obj.PublicFunc();
  // obj.PrivateFunc(); will return an error
  return 0;
}
