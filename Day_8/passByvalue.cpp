#include <iostream>
void modify(int num) {
  num += 10; // Only modifies the local copy
}
int main() {
  int value = 5;
  modify(value);
  std::cout << "After modify, value = " << value << std::endl; // Output: 5
  return 0;
}
