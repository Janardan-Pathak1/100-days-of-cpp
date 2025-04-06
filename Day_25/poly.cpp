#include "iostream"

using namespace std;

class Animal {

public:
  void AnimalSound() { cout << "Animal makes sound\n"; }
};

class pig : public Animal {

public:
  void AnimalSound() { cout << "This animal makes wee wee \n"; }
};

class Dog : public Animal {
public:
  void AnimalSound() { cout << "This animal makes woof woof\n"; }
};

int main() {
  pig obj;
  obj.AnimalSound();

  Animal animal;
  animal.AnimalSound();

  Dog dog;
  dog.AnimalSound();

  return 0;
}
