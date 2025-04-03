#include "iostream"

using namespace std;

class CAR {
public:
  string name;
  int milage;
  int year;
};

int main() {

  CAR myObj1;
  myObj1.name = "hyundai";
  myObj1.milage = 40;
  myObj1.year = 2023;

  CAR myObj2;
  myObj2.name = "Honda";
  myObj2.milage = 30;
  myObj2.year = 2020;
}
