#include "iostream"

using namespace std;

class OOP {
public:
  int myNum;
  string myString;
};

int main() {
  OOP myObj;

  myObj.myNum = 5;
  myObj.myString = "This is a stribg";

  cout << myObj.myNum << endl;
  cout << myObj.myString << endl;

  return 0;
}
