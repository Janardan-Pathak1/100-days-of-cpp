#include "iostream"

using namespace std;

void printArr(int *ptr, int size) {

  for (int i = 0; i < size; i++) {
    cout << *(ptr + i) << endl;
  }
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  printArr(arr, 5);
  return 0;
}
