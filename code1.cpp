#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int Fib(int n);

int Fact(int n);

int main() {
  int x;
  
  cout << "How many Fibonacci Numbers do you want? ";
  cin  >> x;
  cout << "First " << x << " Fibonacci Numbers: " << Fib(x - 1) << endl;
}

int Fib(int n) {
  if (n <= 1)
    return n;
  else
    return Fib(n-1) + Fib(n-2);
}

int Fact(int n) {
  if (n == 1)
    return 1;
  else
    return n * Fact(n-1);
}
