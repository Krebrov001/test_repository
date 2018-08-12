#include <iostream>

int Fib(int n);

int Fact(int n);

int main() {
  int x;
  
  std::cout << "How many Fibonacci Numbers do you want? ";
  std::cin  >> x;
  std::cout << "First " << x << " Fibonacci Numbers: " << Fib(x - 1) << std::endl;
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
