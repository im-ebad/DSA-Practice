#include <iostream>
using namespace std;
int factorial(int n) {
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}
int main() {
  int n;
  cout << "Enter a number:";
  cin >> n;
  cout << "The factorial is " << factorial(n) << "." << endl;
  return 0;
}
