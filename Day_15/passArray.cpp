#include "iostream"

using namespace std;

void printArr(int arr[],
              int size) { // Even though the parameter is declared as int arr[],
                          // it is internally treated as int* arr

  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}
int main() {

  int arr[5] = {1, 2, 3, 4, 5};
  printArr(arr, 5);
  return 0;
}
