#include <iostream>

using namespace std;

int main() {
  // 小数は丸められてi1 = 7
  int i1 = 7.2;
  cout << "i1 is " << i1;

  // コンパイル時にエラーが出るので変数初期化時は {}を使う方が良い
  // エラー　浮動小数点から整数への変換
  // int i2 {7.2};
  // int i3 = {7.2};
}
