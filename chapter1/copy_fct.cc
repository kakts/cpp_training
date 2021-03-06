#include <iostream>
#include <initializer_list>
using namespace std;

void copyFct()
{
  int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int v2[10];

  for (auto i = 0; i != 10; ++i) {
    v2[i] = v1[i];
  }
}

void increment()
{
  int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto& x : v) {
    ++x;
    cout << x << '\n';
  }
}

void print()
{
  int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto x : v) {
    cout << x << '\n';
  }

  int v2[] = {10, 21, 32, 43, 54, 65};
  for (int x : v2) {
    cout << x << '\n';
  }
}

int main() {
  print();
  increment();
}
