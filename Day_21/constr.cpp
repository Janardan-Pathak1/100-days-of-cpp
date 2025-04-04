#include "iostream"

using namespace std;

class myClass {

public:
  int name;
  int roll;
  myClass() { cout << "My Class" << endl; }
};

int main() {
  myClass obj;
  return 0;
}
