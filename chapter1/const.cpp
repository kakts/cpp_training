// const 値は変更されない　インターフェースの指定に主に用いられる
// constexpr  コンパイル時に評価される　主として定数の指定に用いられる
// 読み取り専用メモリ領域にデータ配置されるのを許可
// そして性能も向上する

// 定数式(constant expression)の中でも利用できる関数　すなわち　コンパイラによって評価されることになる
// 式の中で利用される関数は、 constexprとして定義しなければならない

int main()
{
  const int dmv = 17;
  int var = 17; // 定数ではない

  constexpr double max1 = 1.4 * square(dmv); // square(17) が定数であればOK
  // constexpr double square(double x) { return x * x }; のように、constexprとして関数を定義する必要がある

  constexpr double max2 = 1.4 * square(var); // エラー varは定数式でない

  const double max3 = 1.4 * square(var); // OK constexprとは違い、実行時に評価されるため

  double sum(const vector<double>&); // sumは実引数を変更しない

  vector<double> v {1.2, 3.4, 4.5};

  const double s1 = sum(v); // OK 実行時に評価される
  constexpr double s2 = sum(v); // sum(v)は定数式でない
}
