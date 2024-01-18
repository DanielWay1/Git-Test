
#include <iostream>

using namespace std;


int sum(int n);


int main() {

  // wasn't sure if I was supposed to leave this or not. So I kept it in
  cout << "Hello World!" << endl;


  int n;

  cout << "Please enter a number ";
  cin >> n;

  int Answer = sum(n);
  cout << "the sum is: " << Answer << endl;

  return 0;
}

int sum(int n) {
  int result = 0;

  for (int i = 1; i <= n; i++) {
    result += i;
  }

  return result;
}
