#include "cstdlib"
#include "iostream"
#include <cstdlib>

using namespace std;

int Sum(int num1, int num2) { return num1 + num2; }

int Sub(int num2, int num3) { return num2 - num3; }

int Multiply(int num1, int num2) { return num1 * num2; }

int Divide(int num1, int num2) { return num2 / num1; }

int main() {

  int input, num1, num2;
  while (true) {
    cout << "\n1. Sum" << endl
         << "\n2. Subract" << endl
         << "\n3. Multiply" << endl
         << "\n4. Divide" << endl
         << "\n5. Exit" << endl;

    cout << "\nEnter the number: ";
    cin >> input;
    switch (input) {
    case 1:
      cout << "Enter First number: ";
      cin >> num1;
      cout << "Enter Second number: ";
      cin >> num2;
      cout << "Your sum is: " << Sum(num1, num2);
      break;
    case 2:
      cout << "Enter First number: ";
      cin >> num1;
      cout << "Enter Second number: ";
      cin >> num2;
      cout << "Your sub is: " << Sub(num1, num2);
      break;
    case 3:
      cout << "Enter First number: ";
      cin >> num1;
      cout << "Enter Second number: ";
      cin >> num2;
      cout << "YOur Multiply is: " << Multiply(num1, num2);
      break;
    case 4:
      cout << "Enter First number: ";
      cin >> num1;
      cout << "Enter Second number: ";
      cin >> num2;
      cout << "YOur divide is: " << Divide(num1, num2);
      break;
    case 5:
      cout << "Exiting the program....";
      exit(0);

      break;
    defautl:
      cout << "Please Enter a valid input";
      break;
    }
  }

  return 0;
}
