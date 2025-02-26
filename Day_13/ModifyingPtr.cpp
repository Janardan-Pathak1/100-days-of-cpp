#include "iostream"

using namespace std;

int main(int argc, char *argv[]) {
  string food = "Noodles";
  string *ptr = &food;

  cout << *ptr << endl;

  *ptr = "Ham";

  cout << *ptr << endl;

  return 0;
}
