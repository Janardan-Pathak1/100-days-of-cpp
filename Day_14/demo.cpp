#include <iostream>
using namespace std;

int main() {
  int arr[5] = {10, 20, 30, 40, 50};
  int *ptr = arr; // ptr now points to arr[0]

  // Using pointer arithmetic to access array elements
  cout << "First element: " << *ptr << endl;        // Equivalent to arr[0]
  cout << "Second element: " << *(ptr + 1) << endl; // Equivalent to arr[1]

  // Looping through the array using pointers
  for (int i = 0; i < 5; ++i) {
    cout << "Element " << i << ": " << *(ptr + i) << endl;
  }

  return 0;
}
