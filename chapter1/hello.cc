#include <iostream>

void some_function()
{
  double d = 2.2;
  int i = 7;
  d = d;

  for (int i = 0; i < 10; i++) {
    std::cout << "test" << i << "\n";
  }
}

int main()
{
  std::cout << "hello world\n";
  some_function();
}
