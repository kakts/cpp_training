#include <iostream>

class Vector {
  public:
    // コンストラクタ
    Vector(int s) :elem{new doubles[s]}, sz{s} {}
    
    double& operator[](int i) {
      return elem[i];
    }
    int size() {
      return sz;
    }
  private:
    double* elem;
    int sz;
}

double read_and_sum(int s)
{
  Vector v(s);
  for(int i = 0; i < v.size(); ++i) {
    cin >> v[i];
  }

  double sum = 0;
  for(int i = 0; i < v.size(); ++i) {
    sum += v[i];
  }
  return sum;
}

int main()
{
  Vector v(6);
}
