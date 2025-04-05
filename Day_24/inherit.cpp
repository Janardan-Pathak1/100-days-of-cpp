#include "iostream"

using namespace std;

class BaseClass {
public:
  int salary;

  void setSalary(int s) { salary = s; }

  void getSalary() { cout << "The salary is: " << salary << endl; }
};

class DerivedClass : public BaseClass {
public:
  string what = "This is what";
};

int main() {

  DerivedClass obj;

  obj.setSalary(500);
  obj.getSalary();
  cout << obj.what << endl;

  return 0;
}
