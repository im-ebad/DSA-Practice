#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
  if (n == 0 || n == 1)
    return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
  int n;
  cout << "Enter a number:";
  cin >> n;
  cout << endl
       << "The " << n << "th fibonacci term is " << fibonacci(n) << endl;
  // to print the fiboonacci series
  /*
   int i=0;
  cout<<"The fibonacci series ";
  while(i<n)
      cout<<" "<<fibonacci(i++);
  */
  return 0;
}
