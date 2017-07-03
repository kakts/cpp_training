#include <iostream>

using namespace std;

bool accept3()
{
  int tries = 1;
  while(tries < 4) {
    cout << "Do you want to proceed (y or n)? \n";
    char answer = 0;
    cin >> answer;

    switch(answer) {
      case 'y':
        return true;
      case 'n':
        return false;
      default:
        cout << "Sorry, I don't understand ths. \n";
        ++tries;
    }
  }
  cout << "I'll take that for a no \n";
  return false;
}

int main()
{
  accept3();
}
