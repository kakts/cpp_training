#include <iostream>

using namespace std;

struct Vector {
  int sz; // 要素数
  double* elem; // 要素へのポインタ
};

// vectorインスタンスの参照とサイズ数を渡すことで初期化させる
// 参照渡すことで呼び出し元のvの内容を変更できる
void vector_init(Vector& v, int s)
{
  v.elem = new double[s];
  v.sz = s;
}

double read_and_sum(int s)
{
  Vector v;
  vector_init(v, s);
  cout << "Please insert double values \n";
  for (int i = 0; i < s; ++i) {
    cin >> v.elem[i];
  }

  double sum = 0;
  for (int i = 0; i < s; ++i) {
    sum += v.elem[i];
  }

  return sum;
}

int main()
{
  int res = read_and_sum(5);
  cout << "Result is" << res;
}
